#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int> d;
    d.push_back(10);
    d.push_front(20);
    d.push_back(30);
    d.push_front(40);
    d.push_back(50);
    d.push_front(60);

    // 60,40,20,10,30,50

    cout<<"Size: "<<d.size()<<endl;
    
    cout<<"Front Element "<<d.front()<<endl;
    cout<<"Back Element "<<d.back()<<endl;

    cout<<"Complete Deque: "<<endl;    
    for(const int& i : d){
        cout<<i<<" ";
    }
    cout<<endl;
    
    d.pop_front();
    d.pop_back();
    
    cout<<"Complete Deque: "<<endl;    
    for(const int& i : d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size: "<<d.size()<<endl;

    int index = 0;
    do{
        cout<<"Enter index you want to access: "<<endl;
        cin>>index;
    }while(index > d.size());

    cout<<"Accessing Element at index "<<index<<": "<<endl;
    cout<<d[index]<<endl;
}