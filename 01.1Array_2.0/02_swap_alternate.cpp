#include<iostream>
using namespace std;
    void swap_alt(int arr[],int size){
         for(int i=0;i<size;i+=2){ // for loop because you have to cover both odd and even while loop gives for even only with this logic. and also no. of iteration is known here hence for loop.
            if(i+1<size) // this keeps odd array element at its place
            swap(arr[i],arr[i+1]);
         }
    }; // one thing to notice here is that we are not storing the result because by performing swapping we are actually changing the real array otherwise if its not the real array changed ,we have then stored it in a different container to display it.
    void print(int arr[],int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
int main(){

    int arr[7]={1,2,3,4,5,6,7};
    int brr[6]={11,12,13,14,15,16};
    swap_alt(arr,7);
    print(arr,7);
    swap_alt(brr,6);
    print(brr,6);
    return 0;

}