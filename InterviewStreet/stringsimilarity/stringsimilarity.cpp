#include<iostream>

using namespace std;

int similarstrings(char *string, int index){
    int  i;
    for(i=index; string[i]!= '\0' ; i++){
        if(string[i] != string [i-index]){
           return i-index; 
        }
    }
    return i-index;
}

int main(){
    int no;
    cin >> no;
    char string[100001];
    for(int i=0; i<no; i++){
        cin >> string;
        int total = 0;
        for(int j=0; string[j]!= '\0'; j++){
            total = total + similarstrings(string, j);
        } 
        cout << total << endl;
    }
}
