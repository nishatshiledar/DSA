#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout << "Enter a Number:";
    cin >> a;
    cout << "Enter number how many times it should left shift:";
    cin>>b;
    cout << (a<<b)<<endl;
    return 0;
}