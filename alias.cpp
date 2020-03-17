#include <bits/stdc++.h>
using namespace std;

void f(int &a);

int main() {
    int n = 10;

    cout << "local n = " << n << endl;

    f(n);

    cout << "new n = " << n << endl;
    
    return 0;
}

void f(int &a) {
    a++;

    hypot(1, 2.0);

    min(1, 2, 3);

    cout << "incremented a = " << a << endl;

    return;
}