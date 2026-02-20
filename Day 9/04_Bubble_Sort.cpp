#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {9,8,7,6,5,4,3,2,1};
    for(int i = 0 ; i < v.size(); i++){
        for(int j = 0 ; j < v.size() ; j++){
            if(v[j] > v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    for(int i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}