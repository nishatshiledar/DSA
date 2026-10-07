#include<iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a Number:";
    cin >> number;
    int count = 0;
    while (number != 0) {
        if (number & 1) {
            count++;
        }
        number = number >> 1;
    }
    cout << count << endl;
    return 0;
}
// This program checks the binary representation of the input number
// bit by bit and counts how many 1s it contains.