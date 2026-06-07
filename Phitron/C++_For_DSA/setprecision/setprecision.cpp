#include<iostream>
#include<iomanip>
using namespace std;
int main () {
    double d = 2.453453453;
    cout << d << endl;
    cout << fixed << setprecision(2) << d << endl;
    cout << fixed << setprecision(6) << d << endl;
    return 0;
}