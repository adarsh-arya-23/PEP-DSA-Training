#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;

    cout << "*****Performing Pushing Operation in Stack*****" << endl;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(50);
    nums.push_back(60);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "*****Performing Popping Operation in Stack*****" << endl;
    nums.pop_back();

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "*****Performing Top Operation in Stack*****" << endl;
    if (!nums.empty()) {
        cout << nums.back() << endl;
    }

    cout << "*****Checking Stack Is Empty Or Not*****" << endl;
    if (nums.empty()) {
        cout << "Stack is Empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    cout << "*****Size of Stack*****" << endl;
    cout << nums.size() << endl;

    return 0;
}



/*
Stack Operations:- 
push : insert element
pop: remove last inserted element
top: return top element
empty: check if stack is empty
size: return size of stack

*/