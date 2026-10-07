#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter a Number :";
    cin >> number;
    if(number & 1) {
        cout << "The entered number is Odd"<<endl;
    }
    else {
        cout << "The Entered number is even"<<endl;
    }
return 0;
}