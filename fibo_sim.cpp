#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull fibonacci(ull a);

int main() {
    ull n;
    cin >> n;

    ull ans = fibonacci(n);

    cout << ans << endl;

    return 0;
}

ull fibonacci(ull a) {
    if (a == 0 || a == 1) {
        return a;
    } else {  
        return fibonacci(a-1) + fibonacci(a-2);
    }
}