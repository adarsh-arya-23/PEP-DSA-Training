#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {9,8,7,6,5,4,3,2,1};
    for(int i = 1 ; i < v.size(); i++){
        int key = v[i];
        int j = i-1;
        while(j >= 0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
    for(int i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}