#include <iostream>
using namespace std;

int main(){
    unsigned long int abc;

    abc = 4294967295;
    
    cout << abc << endl;

    abc += 1;

    cout << abc << endl;

    abc = abc >> 1;

    cout << abc << endl;

    return 0;
}
