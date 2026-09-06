#include<iostream>
using namespace std;
int main() {
int a = 25;
int *p = &a;
cout << a << endl;
cout << *p << endl;
*p = 50;
cout << a << endl;
return 0;
}
