// Counting the number of times substring is repeated.
#include<iostream>
using namespace std;
int main(){
    int count = 0;
    string s = "aababaabbaaa";
    string target = "ab";
    for(int i = 0 ; i < s.length(); i++){
        if((s.substr(i, target.length())) == target){
            count++;
        }
    }
    cout<<"Count:"<<count<<endl;
}