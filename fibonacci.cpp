#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull fibonacci(ull a);

map<ull, ull> fibomap;

int main() {
    ull n;
    cin >> n;

    fibomap[0] = 0;
    fibomap[1] = 1;

    ull ans = fibonacci(n);

    cout << ans << endl;

    return 0;
}

ull fibonacci(ull a) {
    if (a == 0 || a == 1) {
        return a;
    } else {
        if (fibomap.find(a-1) != fibomap.end()) {
            if (fibomap.find(a-2) != fibomap.end()) {
                return fibomap[a-1] + fibomap[a-2];
            } else {
                fibomap[a-2] = fibonacci(a-2);
                return fibomap[a-1] + fibomap[a-2];
            }
        } else {
            if (fibomap.find(a-2) != fibomap.end()) {
                fibomap[a-1] = fibonacci(a-1);
                return fibomap[a-1] + fibomap[a-2];
            } else {
                fibomap[a-1] = fibonacci(a-1);
                fibomap[a-2] = fibonacci(a-2);
                return fibomap[a-1] + fibomap[a-2];
            }
        }
    }
}