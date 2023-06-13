#include <iostream>
using namespace std;

int main(void) {
    int input;
    cin >> input;

    if (input & 1) cout << "Odd" << endl;
    else cout << "Even" << endl;


    return 0;
}