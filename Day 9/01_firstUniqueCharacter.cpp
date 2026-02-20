#include<iostream>
#include<map>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mp;
        for(int i : s){
            mp[i]++;
        }
        for (int i = 0 ; i < s.length() ; i++){
            if(mp[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    Solution s;
    string str = "leetcode";
    int res = s.firstUniqChar(str);
    cout<<"First unique character index: "<<res<<endl;
}