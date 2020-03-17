#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main() {
    double d = 333.546372;

    cout << left << setiosflags(ios::fixed | ios::showpoint) << setw(15) << setprecision(1) << d;
    cout << left << setiosflags(ios::fixed | ios::showpoint) << setw(15) << setprecision(2) << d;
    cout << left << setiosflags(ios::fixed | ios::showpoint) << setw(15) << setprecision(3) << d;
    cout << endl;

    double ans;

    ans = pow(2.5, 3.0);

    cout << setiosflags(ios::fixed | ios::showpoint) << setw(10) << setprecision(5) << ans << endl;
}