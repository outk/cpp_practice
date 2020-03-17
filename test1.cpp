#include <bits/stdc++.h>
using namespace std;

int main() {
    double amount, principal = 1000.0, rate = .05;

    cout << "years" << setw(21) << "balance" << endl;

    for (int year=1; year <= 10; year++) {
        amount = principal * pow(1.0 + rate, year);
        cout << setw(5) << year << setiosflags(ios::fixed | ios::showpoint) << setw(21) << setprecision(2) << amount << endl;
    }

    return 0;
}