#include<iostream>
#include<list>
#include<forward_list>
#include<algorithm>
using namespace std;

int main(){

    forward_list<int> singleList;

    singleList.push_front(10);
    singleList.push_front(20);
    singleList.push_front(30);
    singleList.push_front(40);
    singleList.push_front(50);

    cout<<"Single Linked List:"<<endl;
    for(const auto& i : singleList){
        cout<<i<<" ";
    }
    cout<<endl;

    int size = distance(singleList.begin(), singleList.end());
    cout<<"Size: "<<size<<endl;

    cout<<"\nRemoving Element 20:"<<endl;
    singleList.remove(20);
    for(const auto& i : singleList){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"\nInserting 25 after first element:"<<endl;
    auto it = singleList.begin();
    singleList.insert_after(it, 25);

    for(const auto& i : singleList){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"\nReversing List:"<<endl;
    singleList.reverse();
    for(const auto& i : singleList){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"\nClearing List:"<<endl;
    singleList.clear();

    if(singleList.empty()){
        cout<<"List is now empty"<<endl;
    }

    return 0;
}
