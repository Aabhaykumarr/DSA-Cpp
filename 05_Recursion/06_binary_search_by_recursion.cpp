#include<iostream>
using namespace std;

    bool binary_search(int arr[],int s, int e, int k){
        
    // base case 
        // element not found
        if(s>e){
            return false;
        }

        int mid = s + (e-s)/2;

        // element found
        if(arr[mid]==k){
            return true;
        }



        if (arr[mid]<k){
           return binary_search(arr,mid+1,e,k);
        } else {
            return binary_search(arr,s,mid-1,k);
        }

    }

int main (){

     int arr[6] = {2,4,6,10,14,16};
    int size = 6;
    int key = 16;
    int s =0;
    int e= size-1;
    bool ans = binary_search(arr,s,e,key);

    cout<<"present or not : "<<binary_search(arr,s,e,key);

    return 0;
}