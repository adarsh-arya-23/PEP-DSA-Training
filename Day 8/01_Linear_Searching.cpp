#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target = 54;
    vector<int> v = {62,54,64,31,65};
    int size = v.size();
    for(int i = 0 ; i < size ; i++){
        if(v[i] == target){
            cout<<"Element "<<v[i]<<" is at "<<i+1<<endl;
            return 0;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}