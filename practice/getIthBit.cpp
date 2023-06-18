#include <iostream>
using namespace std;

int getIthBit(int number, int pos) {
    int mask = ( 1 << pos );

    return ( number & mask ) ? 1 : 0;

}

int main(void) {
    int num = 16;
    int i = 4;

    cout << getIthBit(num, i) << endl;


    return 0;
}