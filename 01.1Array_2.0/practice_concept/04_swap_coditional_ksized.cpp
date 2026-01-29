#include<iostream>
using namespace std;

void conditional_swap(int arr[],int size){
    for(int i=0;i<size-1;i+=2){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main (){

    int arr[7]={3,1,4,2,5,7,9};
    conditional_swap(arr,7);


    return 0;
}