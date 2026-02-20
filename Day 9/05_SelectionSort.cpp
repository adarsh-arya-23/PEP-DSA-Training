#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {9,8,7,6,5,4,3,2,1};
    for(int i = 0 ; i < v.size(); i++){
        int minIndex = i;
        for(int j = i+1 ; j < v.size() ; j++){
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }
        swap(v[i],v[minIndex]);
    }
    for(int i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}