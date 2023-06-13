#include <iostream>
using namespace std;


int getIthBit(int n, int i) {
    int mask = ( 1 << i );
    
    return (n & mask) ? 1 : 0;
}


int main(void) {
    int n = 5;
    int i = 1;

    cout << getIthBit(n, i) << endl;


    return 0;
}