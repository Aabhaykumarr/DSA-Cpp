#include<iostream>
using namespace std;

int binary_search(int arr[],int size,int key){

    int s=0,e=size-1;
    int mid= s+(e-s)/2;
    while(s<=e){ // here equal to is also needed so that last value or index must be included during comparision when s and e becomes same .
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
                   //  e--;  i wrote this and code worked but time complexity was compromised. 
                   e=mid-1;
        }
        else{
              // s++;  i wrote this accidently by the way.
              s=mid+1;
        }
        mid=s+(e-s)/2;   // here updating mid is important because after loop we have changed the values of s and e so next iteration will follow the new value but if not updated mid will cause mid to always have same value.
    }
    return -1;
}
int main(){

    int arr[9]={1,2,3,4,5,6,7,8,9};
    int value=binary_search(arr,9,9);
    cout<<"the key "<<arr[value]<<"  is at index  "<<value;

    return 0;
} 