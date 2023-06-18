#include <iostream>
using namespace std;

bool oddEven(int number) {
    return (number & 1) ? true : false;
}

int main(void) {
    int n = 11;
    
    cout << ( oddEven(n) ? "odd" : "even") << endl;


    return 0;
}