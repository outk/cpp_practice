#include <bits/stdc++.h>
using namespace std;

int main() {
    int key1 = 1, key2 = 2;

    cout << "key1 = " << key1 << endl;
    cout << "&key1 = " << &key1 << endl;

    cout << "key2 = " << key2 << endl;
    cout << "&key2 = " << &key2 << endl;

    void *vPtr = (long long *) &key2;

    cout << "vPtr = " << vPtr << endl;
    cout << "* (int *) vPtr = " << * (int *) vPtr << endl;

    for (int i=0; i<8; i++) {
        cout << "* ((bool *) vPtr + " << i << ") = " << * ((bool *) vPtr + i) << "    at " << vPtr + i << endl;
    }

    cout << "key1 = " << key1 << endl;
    cout << "&key1 = " << &key1 << endl;

    cout << "key2 = " << key2 << endl;
    cout << "&key2 = " << &key2 << endl;

    return 0;
}