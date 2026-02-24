#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> result;
        vector<vector<int>> result1;
        sort(nums.begin(), nums.end());
        do{
            result.insert(nums);
        }while(next_permutation(nums.begin(), nums.end()));
        for(auto i : result){
            result1.push_back(i);
        }
        return result1;
    }
};
int main(){
    Solution s;
    vector<int> nums = {1, 1, 2};
    vector<vector<int>> result = s.permuteUnique(nums);
    for(auto& perm : result){
        for(int num : perm){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}