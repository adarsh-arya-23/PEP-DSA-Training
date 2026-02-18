#include <iostream>
#include <set>
#include <string>

int main() {
    // Declare a set of integers. 
    // The underlying data structure is a Red-Black Tree.
    std::set<int> mySet;

    // Insert elements into the set (O(log n) time complexity)
    mySet.insert(10);
    mySet.insert(30);
    mySet.insert(20);
    mySet.insert(5);
    mySet.insert(25);

    // Elements are automatically stored in sorted order
    std::cout << "Elements in the set (sorted order):" << std::endl;
    for (int element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Search for an element (O(log n) time complexity)
    int searchValue = 20;
    if (mySet.find(searchValue) != mySet.end()) {
        std::cout << searchValue << " found in the set." << std::endl;
    } else {
        std::cout << searchValue << " not found." << std::endl;
    }

    // Delete an element (O(log n) time complexity)
    int deleteValue = 10;
    mySet.erase(deleteValue);
    std::cout << "After deleting " << deleteValue << ":" << std::endl;
    for (int element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}


/*node should either be red or black
root is always black
red node conflict:- 
new element is always red
same number of black
*/