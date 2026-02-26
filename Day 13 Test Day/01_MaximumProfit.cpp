#include<iostream>
#include<vector>
using namespace std;
vector<int> maximumProfit(vector<int> &nums){
    vector<int> answer;
    int size = nums.size();
    int start = 0;
    int end = 0;
    int res = nums[0];
    for(int i = 0 ; i < size ; i++){
        int currsum = 0;
        for(int j = i ; j < size ; j++){
            currsum += nums[j];
            // res = max(res, currsum);         ON-PAPER
            if(currsum > res){
                res = currsum;
                start = i;
                end = j;
            }
        }
    }
    // return answer;                           ON-PAPER
    for(int i = start ; i <= end ; i++){
        answer.push_back(nums[i]);
    }
    return answer;
}
int main(){
    vector<int> v = {1,3,-5,-4,35,-8};
    vector<int> res = maximumProfit(v);
    for(int i : res){
        cout<<i<<" ";
    }
}