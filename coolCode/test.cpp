#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

void func(){
}

struct node {

    int data;
    struct node* next;

};
int main(){
    //string temp = "abcd";
    //cout<<temp.size()<<endl;
    //char *temp = "abcd";
    //char* temp = "";
    //cout<<strlen(temp)<<endl;

    char *temp1 = NULL;
    try{
        func();
    }
    catch (...){
         cout<<"expection occured"<<endl;
    }

    char *temp = "aBCd";
    cout<<(int)temp[2]<<endl;
    
    bool temp4[1200];
    
    struct node* temp123 = new struct node;
    
    temp123->data = 12;
    temp123->next = NULL;
}
