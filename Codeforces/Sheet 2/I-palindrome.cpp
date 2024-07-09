#include <iostream>
using namespace std;

int main() {
    bool isPalin = true;
    string num;

    cin >> num;

    for (int i = num.length() - 1; i >= 0; i--) {
        if (!(num[i] == '0' && i == num.length() - 1))
        {
            cout << num[i];
        }
    }

    cout << endl;

    int j = num.length() - 1;

    for (int i = 0; i <= j; i++) {
        if (num[i] != num[j])
        {
            isPalin = false;
            break;
        }

        j--;
    }

    if (isPalin)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
