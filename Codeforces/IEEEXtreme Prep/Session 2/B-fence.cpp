#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n_planks, piano_width, min_sum, current_sum, min_index;
    min_sum = 0;
    current_sum = 0;
    min_index = 0;

    cin >> n_planks >> piano_width;

    vector<int> heights(n_planks);

    for (int i = 0; i < n_planks; ++i) {
        cin >> heights[i];
    }

    for (int i = 0; i < piano_width; i++) {
        current_sum += heights[i];
    }

    min_sum = current_sum;

    for (int i = 1; i <= n_planks - piano_width; i++) {
        current_sum -= heights[i - 1] + heights[i + piano_width - 1];
        if (current_sum < min_sum) {
            min_sum = current_sum;
            min_index = i;
        }
    }

    cout << min_index + 1 << endl;

    return 0;
}
