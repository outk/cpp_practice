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
    cout << endl;


    int x=1;

    int *ptr = &x;

    cout << "*ptr = " << *ptr << endl;
    cout << "ptr = " << ptr << endl;

    int * const cPtr = &x;

    cout << "*cPtr = " << *cPtr << endl;
    cout << "cPtr = " << cPtr << endl;

    return 0;
}