#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    priority_queue<int> pq; 

    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << "Top: " << pq.top() << endl; 
    pq.pop();
    cout << "Top after pop: " << pq.top() << endl; 


    priority_queue<int, vector<int>, greater<int>> min_pq;

    min_pq.push(10);
    min_pq.push(30);
    min_pq.push(20);

    cout << "Min-Heap Top: " << min_pq.top() << endl; 
    min_pq.pop();
    cout << "Min-Heap Top after pop: " << min_pq.top() << endl;

    return 0;
}
