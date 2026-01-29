/*
3. Swap Even-Odd Positioned Elements (Medium)
Swap all elements at even indices with elements at odd indices.
Input: [1, 2, 3, 4, 5, 6, 7, 8]
Output: [2, 1, 4, 3, 6, 5, 8, 7]
Hint: Think about how index parity (even/odd) relates to swapping pairs.
*/

#include<iostream>
using namespace std;

void  swap_indexes(int arr[],int size){
    for(int i=0;i<size-1;i+=2){
         swap(arr[i],arr[i+1]);

        }
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){

    int arr[7]={2,3,4,5,6,7,8};
    swap_indexes(arr,7);
    return 0;
}  

// try for prime composite numbers oir indexes swapping.

