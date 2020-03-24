#include <bits/stdc++.h>
using namespace std;

int main() {
    short a;

    cout << sizeof a << endl;

    int i = 1;

    int *aPtr = &i;

    cout << sizeof i << endl;

    cout << sizeof aPtr << endl;

    long long ll;

    cout << sizeof ll << endl;

    bool b;

    cout << sizeof b << endl;

    const bool cb = 1;

    cout << sizeof cb << endl;

    void *vPtr = &i;

    cout << sizeof vPtr << endl;
    cout << i << endl;
    cout << * (long long *) vPtr << endl;
    cout << sizeof(*(char *)vPtr) << endl;

    char *ch;

    cout << sizeof ch << endl;

    vPtr = ch;

    cout << sizeof vPtr << endl;

    return 0;
}