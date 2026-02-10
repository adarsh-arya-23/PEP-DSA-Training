#include<iostream>
using namespace std;
int main(){
    
    string str = "Hello World";
    cout<<"Append"<<endl;
    cout << str.append(" Earth") << endl;
    cout<<"Find"<<endl;
    cout << str.find("World") << endl;
    cout<<"Insert"<<endl;
    cout << str.insert(5, "World ") << endl;
    cout<<"Size"<<endl;
    cout << str.size() << endl;
    cout<<"Replace"<<endl;
    cout << str.replace(str.find("World"), 5, " c++") << endl;
    cout<<"Empty"<<endl;
    string s = "132654";
    cout<<"String to Integer"<<endl;
    cout<<stoi(s)<<endl;
    cout<<"String to double"<<endl;
    cout<<stod(s)<<endl;
    int x = 546;
    cout<<"Integer to String"<<endl;
    cout<<to_string(x)<<endl;


}