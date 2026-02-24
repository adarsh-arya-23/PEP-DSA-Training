#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        do{
            result.push_back(nums);
        }while(next_permutation(nums.begin(), nums.end()));
        return result;
    }
};
int main(){
    Solution s;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = s.permute(nums);
    for(auto& perm : result){
        for(int num : perm){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}