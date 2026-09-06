#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a Number:";
    cin >> n;
        for(int i=0; i<n; i++) {
            int num = 1;
            cout << num;
            num++;
        for(int j=1; j<=i; j++) {
            cout<<(j+1)<<" ";
            
        }
        cout << endl;
    }
    return 0;
}