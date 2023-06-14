#include <iostream>
using namespace std;

void clearIthBit(int &n, int i) {
    int mask = ~( 1 << i );
    n = (n & mask);
}

int main(void) {
    int n = 5;
    clearIthBit(n, 2);
    cout << n << endl;

    return 0;
}