

// swapping alternate k sized element .

#include<iostream>
using namespace std;
void swap_ksized(int arr[],int size){
    for(int i=0;i<size-1;i+=3){
        swap(arr[i],arr[i+2]);
    }
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}

int main (){
    int arr[7]={2,3,4,5,6,7,9};
    swap_ksized(arr,7);

    return 0;
}