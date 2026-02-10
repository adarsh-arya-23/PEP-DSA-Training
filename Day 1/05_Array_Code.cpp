#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> a;

    cout<<"Start Pushing Elements one-by-one"<<endl;
    int n;
    for(int i = 0 ; i < 5 ; i++){
        cin>>n;
        a.push_back(n);
    }

    for(int i = 0 ; i < 5 ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Updating element at 2nd Position"<<endl;
    a[1] = 10;
    for(int i = 0 ; i < 5 ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Inserting Element 10 at 2 Index"<<endl;
    a.insert(a.begin()+2, 10);
    for(int i = 0 ; i < 5 ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Deleting Element At Index 2"<<endl;
    a.erase(a.begin()+2);
    for(int i = 0 ; i < 5 ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Soting Array"<<endl;
    sort(a.begin(), a.end());
    for(int i = 0 ; i < 5 ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Reversing Array"<<endl;
    reverse(a.begin(), a.end());
    for(int i = 0 ; i < 5 ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}