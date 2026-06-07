#include <iostream>

using namespace std;

int main()
{
    char c[100];

    cin >> c;
    cout << c << endl;

    fgets(c, 100, stdin);
    cout << c << endl;

    cin.ignore();

    cin.getline(c, 100);
    cout << c << endl;

    string str = "Welcome";
    cout << str << endl;
    string str2 = "Hi C++";
    cout << str2 << endl;

    return 0;
}