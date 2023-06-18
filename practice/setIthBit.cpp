#include <iostream>
using namespace std;

void clearIthBit(int &number, int pos) {
    int mask = ( 1 << pos );
    mask = ~(mask);

    number = ( number & mask );
}

void setIthBit(int &number, int pos, int val) {
    clearIthBit(number, pos);

    val = ( val << pos );

    number = ( number | val );
}

int main(void) {
    int num = 11;
    int pos = 2;

    int val = 1;
    setIthBit(num, pos, val);

    cout << num << endl;


    return 0;
}