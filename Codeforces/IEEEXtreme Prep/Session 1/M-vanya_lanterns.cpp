    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;
     
    bool canLightStreet(double radius, const std::vector<int>& positions, double streetLength) {
        int n_lanterns = positions.size();

        if (positions[0] - radius > 0 || positions[n_lanterns - 1] + radius < streetLength) {
            return false;
        }

        for (int i = 1; i < n_lanterns; i++) {
            if (positions[i] - positions[i - 1] > 2 * radius) {
                return false;
            }
        }

        return true;
    }

    int main()
    {
        int n_lanterns, l_street;

        cin >> n_lanterns >> l_street;

        vector<int> lantern_pos(n_lanterns);

        for (int i = 0; i < n_lanterns; i++)
        {
            cin >> lantern_pos[i];
        }

        sort(lantern_pos.begin(), lantern_pos.end());

        double low, high, eps, optim;
        low = 0;
        high = l_street;
        eps = 1e-9;

        while (high - low > eps)
        {
            optim = low + (high - low) / 2;

            if (canLightStreet(optim, lantern_pos, l_street))
            {
                high = optim;
            }
            else
            {
                low = optim;
            }
        }

        cout << optim << endl;

        return 0;
    }