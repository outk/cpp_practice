#include <bits/stdc++.h>
using namespace std;

void f(int a);

int n;

int main() {
    cin >> n;

    f(0);

    cout << "incremented global n in main() = " << n << endl;

    return 0;
}

void f(int a) {
    int n=1;

    cout << "local n in f() = " << n << endl;

    cout << "scope resolution operator ::n = " << ::n << endl;

    ::n++;

    cout << "incremented scope resolution operator ::n in f() = " << ::n << endl;

    return;
}