#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 = "abaabaaba";
    bool res1 = (s1 + s1).find(s1, 1) < s1.size();

    cout << "String: " << s1 << endl;
    if (res1) {
        cout << "Result: Success! The string is made of a repeated pattern." << endl;
    } else {
        cout << "Result: Failed. No repeated pattern found." << endl;
    }

    return 0;
}




/*



*/
