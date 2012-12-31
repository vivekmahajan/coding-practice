#include<iostream>
#include<vector>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main(){

    vector< vector<int> > arr;

    vector<int> temp(20);
    for(int i=0; i<20; i++){
        arr.push_back(temp);
    }    

    for(int i=0; i<10; i++){
        for(int j=0; j<20; j++){
            arr[i][j] = rand()%400;
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<20; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}
