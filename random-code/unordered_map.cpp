#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    string test = "hello";
    cout<<test;
    unordered_map<string, int> month;
    month["January"] = 31;
    cout<<month["January"]<<endl;
    
}
