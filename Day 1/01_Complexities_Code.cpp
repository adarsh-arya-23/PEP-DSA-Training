#include<iostream>
using namespace std;

int main(){

    int ar[5] = {1,2,3,4,5};

    cout<<"Time Complexity:- O(1)"<<endl;
    cout<<ar[2]<<endl;
    
    cout<<"Time Complexity:- O(n)"<<endl;
    for(int i = 0 ; i < 5 ; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    cout<<"Time Complexity:- O(n^2)"<<endl;
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<"Time Complexity:- O(log n)"<<endl;
    for(int i = 0 ; i <= 5/2 ; i+=2){
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    return 0;
}


/*

Time Complexity and Space Complexity
unit:- micro/sec or nano/sec
O(1)
O(n)
O(n^2)
O(log n) :- Binary Search
O(n log n)
O(2^n)


Space complexity:- The total memory an algorithm requires to run as a function of its input size(n).

why we use string:- use to store meta data and help us to manupulate meta data.
In cpp string are mutable nut in other languages string are immutable.

*/