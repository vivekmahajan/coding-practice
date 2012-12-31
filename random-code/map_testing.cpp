#include<iostream>
#include<map>

using namespace std;

int main(){
    map<char,int> first;
    first['a']=10;
    first['a']=400;
    first['b']=20;
    first['c']=30;
    
    map<char, int>::iterator it;
    it = first.find('d');
    if((it) == first.end()){
        cout<<"can't find the element"<<endl;
    }
    //cout<<(*it).first;
    for(it = first.begin(); it!=first.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }    
 /*
    unordered_map<char,int> second;
    second['a']=10;
    second['a']=400;
    second['b']=20;
    second['c']=30;
    unordered_map<char, int>::iterator it;
    for(it = second.begin(); it!=second.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
*/    
}
