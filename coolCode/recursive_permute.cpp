#include<iostream>

using namespace std;

void permute(char arr[], int index, int len){
    if(index == len-1){
        cout << arr << endl;
        return;
    }
    for(int i=index; i<len; i++){
        char temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
        permute(arr, index+1, len);
    }
}

int main(){
    char arr[] = "abcd";
    cout << arr <<endl;
    int len = sizeof(arr) -1;
    cout << len <<endl;
    permute(arr, 0, len);
}

