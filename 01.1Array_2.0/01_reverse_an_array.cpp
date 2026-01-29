#include<iostream>
using namespace std;
int reverse(int arr[],int size){
    int l=0;
    int r=size-1;
    while(l<=r){ // badi khatarnak hai ye ekk chhota sa galti aur infinite loop even in the print section'mistakes can trigger infinite loop. use control c to stop it.
        int temp=arr[l]; // swap(arr[l],arr[r]); for swapping
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;

    }
}  
void print(int arr[],int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    };
int main(){

    int arr[5]={1,2,3,4,5};
    int brr[6]={6,7,8,9,11,12};
    reverse(arr,5);
    print(arr,5);
    reverse(brr,6);
    print(brr,6);
    return 0;
}