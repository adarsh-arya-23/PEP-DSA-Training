#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {9,8,7,6,5,4,3,2,1};
    for(int i = 0 ; i < v.size(); i++){
        int minIndex = i;
        for(int j = i+1 ; j < v.size() ; j++){
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }
        swap(v[i],v[minIndex]);
    }
    for(int i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}
/*
complexity: O(n^2)

Q. why we don't use recursive approach in selection sort instead of iterative approach?
Soln: Beacuse it don't change the complexity and in some cases it may increase the space complexity by O(n) due to recursive call stack.
what is Recursive call stack:-
When a function is called, a new frame is created on the call stack to hold the function's local variables and return address. If the function calls itself recursively, additional frames are added to the stack for each recursive call. This can lead to increased space complexity if the recursion depth is large, as each call adds a new frame to the stack. In contrast, an iterative approach typically uses a constant amount of space, as it does not involve multiple function calls and frames on the call stack.  

*/