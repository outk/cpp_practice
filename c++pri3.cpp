#include <iostream>
using namespace std;

int main(){
    int in1, in2;
    unsigned long int sum, ans;

    ans = 13 * 35;

    cout << "Enter in1 and in2.(in1 < in2)\n";
    cin >> in1 >> in2;

    while (in1 <= in2) { 
        sum += in1;
        ++in1;
    }

    cout << "Sum of in1 to in2 inclusive is " << sum << endl;
    cout << "Is answer " << ans << " ? \n";

    return 0;
}