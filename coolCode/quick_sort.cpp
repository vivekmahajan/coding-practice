#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

void swap(int p1, int p2, int *arr){
    
    arr[p1] = arr[p1]^arr[p2];
    arr[p2] = arr[p2]^arr[p1];
    arr[p1] = arr[p1]^arr[p2];
}
int find_pivot(int start, int end, int index, int *arr){
    
    int p1 = start;
    int p2 = end;
    while(1){
        while(arr[p1]<arr[index] && p1<p2){
            p1++;
        }
        while(arr[p2]>arr[index] && p2>p1){
            p2--;
        }
        if(p1>=p2){
            return index;
        }
        if(p1==index){
            index = p2;
        }else if(p2==index){
            index = p1;
        }
        cout<<"p1 = "<<p1<<" p2 = "<<p2<<endl;
        swap(p1, p2, arr);
        //p1++;
        //p2--;
        cout<<"***************"<<endl;
        for(int i=0;i<end+1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"***************"<<endl;
    }
    
}

int main(){
    //int arr[] = {8,2,1,6,4,8,5};
    int arr[] = {8,2,1,6,4,10,11,14,15,5};
    int len =  sizeof(arr)/sizeof(int);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    srand(10);
    int pivot = find_pivot(0, len-1, rand()%12, arr);
    cout<<"pivot "<<pivot<<endl;
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
