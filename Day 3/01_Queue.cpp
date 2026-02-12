#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> tempQ) {
    while(!tempQ.empty()){
        cout << tempQ.front() << " ";
        tempQ.pop(); 
    }
    cout << endl;
}

int main(){
    queue<int> q;
    for(int i : {1, 2, 3, 4, 5}) q.push(i);

    cout << "Original Queue: ";
    printQueue(q); 

    q.pop(); 
    cout << "Queue After One Pop: ";
    printQueue(q);

    return 0;
}


/*

Queue: FIFO

Types Of Queue
    - Linear Queue
        -> FIFO Ordering, Elements are inserted at the rear and removed from the front.
    - Circular Queue
        -> It connects the last node of a queue to its first by forming a circular link.
    - Priority Queue
        -> each element has an associated priority, and elements are served based on their priority level.
    - Deque Queue
        -> insertion and removal of elements from both the front and the rear.
Operations On Queue
    - Push Operation : Insertion
    - Pop Operation : Removing First Element.
    - Front Operation : Print First Element.
    - Back Operation : Print Last Element.
    - Size Operation : Print Size of Queue.

*/