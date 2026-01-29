/*  

1. Swap Adjacent Pairs (Easy)
Given an array, swap every two adjacent elements. If the array has odd length, leave the last element as is.
Input: [1, 2, 3, 4, 5]
Output: [2, 1, 4, 3, 5]
Hint: Use a loop with i+=2 increment and check if i+1 < n before swapping.

*/

#include<iostream>
using namespace std;

void swap(int arr[],int size){
    for(int i=0;i<size-1;i+=2){  // or we can use for loop i<size but then use a if(i+1<size)
        
        swap(arr[i],arr[i+1]);
        
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){

    int arr[7]={1,2,3,4,5,6,7};
    swap(arr,7);
    return 0;
}