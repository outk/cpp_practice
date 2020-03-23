#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;

    cout << "a = " << a << endl;
    cout << "*aPtr = " << *aPtr << endl;
    cout << endl;
    cout << "&a = " << &a << endl;
    cout << "aPtr = " << aPtr << endl;
    cout << endl;
    cout << "&*aPtr = " << &*aPtr << endl;
    cout << "*&aPtr = " << *&aPtr << endl;
    cout << endl;
    cout << "&aPtr = " << &aPtr << endl;

    return 0;
}