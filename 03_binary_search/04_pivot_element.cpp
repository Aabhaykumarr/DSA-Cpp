#include<iostream>
using namespace std;

    int pivotelement(int arr[],int size){
         int s=0,e=size-1;
         int mid= s+(e-s)/2;
         while(s<=e){
            if (arr[mid-1]>arr[mid]<arr[mid+1]){
                return mid;
            }
             else if (arr[mid-1]<arr[mid]>arr[mid+1]){
                s=mid;
            }
            else if (arr[mid-1]<arr[mid]<arr[mid+1]){
                e=mid;
            }
            mid=s+(e-s)/2;
         }
    }
int main () {

        int arr[5]={7,9,1,2,3};
        int res = pivotelement(arr,5);
        cout << res << endl;

    return 0;
}