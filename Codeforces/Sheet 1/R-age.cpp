#include <iostream>
using namespace std;

int main()
{
    int age, y, m;

    cin >> age;

    y = age / 365;

    age = age % 365;

    m = age / 30;

    age = age % 30;

    cout << y << " years" << '\n'
         << m << " months" << "\n"
         << age << " days" << endl;

    return 0;
}
