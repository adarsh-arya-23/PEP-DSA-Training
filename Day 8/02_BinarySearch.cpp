#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target = 56;
    vector<int> v = {12,23,45,56,56,78,89};
    int size = v.size();
    int low = 0;
    int high = size - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(v[mid] == target){
            cout << "Found at index " << mid << endl;
            break;
        }
        else if(v[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

}

