#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){
    list<int> l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.push_front(40);
    l.push_front(50);


    cout<<"Linked List: "<<endl;
    for(const auto& i : l){
        cout<<i<<" ";
    }
    cout<<endl;
    
    l.pop_front();
    cout<<"Linked List after Poping: "<<endl;
    for(const auto& i : l){
        cout<<i<<" ";
    }
    cout<<endl;
    
    auto it = find(l.begin(), l.end(), 40);
    l.insert(it, 45); 
    cout<<"Linked List after Insertion: "<<endl;
    for(const auto& i : l){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"removing Element from Linked lIst"<<endl;
    l.remove(20);
    for(const auto& i : l){
        cout<<i<<" ";
    }
    cout<<endl;
}

/*

operatons on linked list:
push -> O(1)
pop -> O(1)
insert -> O(n)
remove -> O(n)
find -< O(n)

*/