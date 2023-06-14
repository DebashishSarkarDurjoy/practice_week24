#include <iostream>
using namespace std;

void setIthBit(int &n, int i) {
    int mask = ( 1 << i );

    n = (n | mask);
}

int main(void) {

    int n = 5;
    int i = 1;

    setIthBit(n, i);

    cout << n << endl;


    return 0;
}