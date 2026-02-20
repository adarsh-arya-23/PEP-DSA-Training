/*

QUICK SORTING
    Time Complexity:-
        -> Best Case: O(n log n)
        -> Average Case: O(n log n)
        -> Worst Case: O(n^2) [When the array is already sorted or reverse sorted]

*/

#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {9,8,7,6,5,4,3,2,1};

    function<void(int,int)> quickSort = [&](int low, int high) {
        if (low < high) {
            int pivot = v[high];
            int i = low - 1;

            for (int j = low; j < high; j++) {
                if (v[j] < pivot) {
                    i++;
                    swap(v[i], v[j]);
                }
            }

            swap(v[i + 1], v[high]);
            int pi = i + 1;

            quickSort(low, pi - 1);
            quickSort(pi + 1, high);
        }
    };

    quickSort(0, v.size() - 1);

    for (int x : v) {
        cout << x << " ";
    }
}
/*

Quick Sort:-
    -> Divide and Conquer Algorithm.
    -> It is a recursive algorithm.
    -> It is an in-place sorting algorithm.
    -> It is not a stable sorting algorithm.
*/