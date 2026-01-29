// PRINTING THE ARRAY:- The actual array remain same it just prints in reverse

#include<iostream>
using namespace std;
 void reverse_arr(int arr[],int size){
    for(int i=5;i>=0;i--){  // by changing the condition it can be reversed
        cout<<arr[i]<<endl;
    }
 };
int main() {

   int arr[6]={11,12,13,9,76,44};
   reverse_arr(arr,6);
    return 0;
}