
#include <iostream>
#include <climits>
using namespace std;
int main() {
    const int size = 10;
    int nums[size];
    int smallest = INT_MAX;
    cout << "Enter 10 array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> nums[i];
        if(nums[i] < smallest) {
            smallest = nums[i];
        }
    }
    cout << "Smallest = " << smallest << endl;
    return 0;
}