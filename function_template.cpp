#include <bits/stdc++.h>
using namespace std;

template <class T, class C>
T maximum(T v1, C v2) {
    T max = v1;

    if (max < v2) {max = v2;}

    return max;
}

int main() {
    int a;
    char b;
    float c;
    cout << "Please enter a value of 'a'." << endl;
    cin >> a;
    cout << "Please enter a value of 'b'." << endl;
    cin >> b;
    cout << "Please enter a value of 'c'." << endl;
    cin >> c;

    cout << maximum(a, b) << endl;
    cout << maximum(b, c) << endl;
    cout << maximum(c, a) << endl;
    cout << maximum(b, a) << endl;
    cout << maximum(c, b) << endl;
    cout << maximum(a, c) << endl;

    return 0;
}