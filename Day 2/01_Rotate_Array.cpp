#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int ar[5] = {1,2,3,4,5};
    int n = 5;
    int rotate;
    cout<<"Enter Number Of Rotation: "<<endl;
    cin>>rotate;
    if(rotate % n == 0){
        cout<<"same array"<<endl;
        return true;
    }
    for(int i = 0 ; i < n/2 ; i++){
        swap(ar[i], ar[n-i-1]);
    }
    cout<<"Reverse array: "<<endl;
    for(int i = 0 ; i < 5 ; i++){
        cout<<ar[i]<<" "; 
    }
    cout<<endl;
    int nex = rotate % n;
    int n2 = n - nex;
    for(int i = 0 ; i < nex/2 ; i++){
        swap(ar[i], ar[nex-i-1]);
    }
    for(int i = 0 ; i < n2/2 ; i++){
        swap(ar[nex + i], ar[n-i-1]);
    }
    for(int i = 0 ; i < 5 ; i++){
        cout<<ar[i]<<" "; 
    }
}