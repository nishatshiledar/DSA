#include<iostream>
using namespace std;
double sum(double a,double b) {
    double s = a+b;
    return s;
}
int minoftwo(int a ,int b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    cout<<"min="<<minoftwo(6,3)<<endl;
    return 0;
}