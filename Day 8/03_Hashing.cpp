/*

****************************************HASHING****************************************

Hashing is a technique used to efficiently store and retrieve data in a hash table. A hash table is a data structure that uses a hash function to map keys to indices in an array, allowing for fast access to values based on their keys.

-> Collision: when two different keys hash to the same index in the hash table, it is called a collision. To handle collisions, various    techniques are used, such as chaining (using linked lists to store multiple values at the same index) or open addressing (finding the next available slot in the array).

-> Linear probing: a collision resolution technique where, upon a collision, the algorithm checks the next slot in the array for an empty slot. If that slot is also occupied, it continues to check subsequent slots until it finds an empty one.

-> Quadratic probing: a collision resolution technique where, upon a collision, the algorithm checks slots in a quadratic manner (e.g., 1^2, 2^2, 3^2, etc.) to find an empty slot. This helps to reduce clustering (where groups of occupied slots form) compared to linear probing.

Separate chaining:- In separate chaining, each index in the hash table contains a linked list (or another data structure) to store all the key-value pairs that hash to the same index. When a collision occurs, the new key-value pair is simply added to the linked list at that index.

*/
#include<iostream>
#include<vector>
#include<list>
using namespace std;
void seperateChaining()
{
    vector<list<int>> table(10);
    int values[]={23,15,42,7,19,31,2,88,54,10};
    for(int key:values)
    {
        int index=key%10;
        table[index].push_back(key);
    }
    for(int i=0;i<table.size();i++)
    {
        cout<<i<<" -> ";
        for(int key:table[i])
        {
            cout<<key<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    seperateChaining();
    

}