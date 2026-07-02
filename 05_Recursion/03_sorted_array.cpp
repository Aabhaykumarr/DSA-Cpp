#include<iostream>
using namespace std;

bool is_sorted(int arr[],int size){
         if(size==0 || size==1) {
         return true;

          } else if(arr[0]>arr[1]){
            return false;
         } else {
           bool remaining_part = is_sorted(arr+1,size-1);
           return remaining_part ;
         }
        } 

int main() {

    int arr[5]={5,4,3,6,3};
    int size =5;
    bool ans = is_sorted(arr+1,size-1);
    if(ans){
        cout <<" array is sorted .";
    } else {
        cout<<"not sorted";
    }

    return 0;
}