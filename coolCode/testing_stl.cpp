#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print_vector(vector<int> arr){
    vector<int>::iterator it;
    for(it=arr.begin(); it<arr.end();it++){
        cout<<*it<<endl;
    }
    
}

int main(){
    vector<int> arr;
    for(int i=0; i<100; i++){
        int ran = rand()%200;
        arr.push_back(ran);
    }
    cout<<"size "<<arr.size()<<endl;
    sort(arr.begin(), arr.end());
    print_vector(arr);
}
