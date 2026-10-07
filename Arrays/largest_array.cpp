#include<iostream>
#include<climits>
using namespace std;
int main() {
    const int size = 7;
    int nums[size];
    int largest = INT_MIN;
    cout << "Enter 7 array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> nums[i];
        if(nums[i]>largest) {
            largest = nums[i];
        }
    }
    cout<<"largest="<<largest<<endl;
    return 0;

}