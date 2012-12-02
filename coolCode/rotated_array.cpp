//an array is rotated random number of times. search an element in the array as efficiently as possible. O(log(n)) solution
#include<iostream>
#include<vector>
using namespace std;
int binary_search(int arr[], int lower, int upper, int number){
    if(lower>upper){
        return -1;
    }
    int middle = (lower+upper)/2;
    if(arr[middle] == number){
        return middle;
    }
    if(arr[middle] > number){
        return binary_search(arr, lower, middle-1, number);
     
    }else{
        return binary_search(arr, middle+1, upper, number);
        
    }
}

int find_position(int arr[], int number, int len){
    
    int lower = 0;
    int upper = len-1;
    int middle;
    int partition;
    if(arr[0] < arr[len-1]){
        return binary_search(arr, 0, upper, number);
    }
    while(lower<=upper){
        middle =  (lower+upper)/2;    
        if(arr[middle]>arr[middle+1]){
            partition = middle;
            break;
        }else{
            if(arr[lower]<arr[middle]){
                lower=middle+1;
            }else{
                upper=middle-1;
            }
        }
    }
    
    int number1 = binary_search(arr, 0 , partition, number);
    
    //cout<<"parition= "<<partition<<" number= "<<number<<" number1="<< number1<<endl;
    if(number1 == -1){
        int number2 = binary_search(arr, partition+1, len-1, number);    
        if(number2 == -1) {
            cout<<"number doesn't exists";
            return -2;        
        }else{
            return number2;
        }
    }else{
        return number1;
    }
    
}


int main(){
    int arr[] = {3, 4, 5, 6, 7, 8, 9,10, 1, 2};
    cout<<"length of the array = "<<sizeof(arr)/sizeof(int)<<endl; 
    int temp = find_position(arr, 8, 7);
    cout << temp+1 << endl;
}
