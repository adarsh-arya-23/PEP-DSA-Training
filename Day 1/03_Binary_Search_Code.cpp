#include<iostream>
using namespace std;
int main(){
    cout<<"Binary Search"<<endl;
    int a[8] = {1,3,4,6,7,9,11,15};
    int n = 8;
    int target = 9;
    int low = 0;
    int high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == target) {
            result = mid;
            break;
        }
        else if (a[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (result != -1){
        cout << "Element found at index: " << result << endl;
    }
    else{
        cout << "Element not found." << endl;
    }
}