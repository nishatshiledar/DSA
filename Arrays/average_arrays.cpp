#include<iostream>
using namespace std;
int main() {
    const int size = 5;
    int nums[size];
    int sum = 0;
    float average = 0;
    cout<<"Enter 5 array elements";
    for(int i=0; i<size; i++) {
        cin >> nums[i];
        sum = sum + nums[i];
    }
    average = sum / 5;
    cout <<"The sum of the array is="<<sum<<endl;
    cout<<"The average of the array is="<<average<<endl;
    return 0;
}