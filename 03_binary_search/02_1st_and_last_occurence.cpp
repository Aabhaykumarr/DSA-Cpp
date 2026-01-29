#include <iostream>
#include <limits.h>
using namespace std;
// finding the first occurence in an array .
 int first_occurence(int arr[], int size, int key)
{

    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    int result = INT_MIN;
    while (s <= e) {
    if(arr[mid]==key){
        result=mid;
        e=mid-1;
    }
    else if(key>arr[mid]){
        s=mid+1;
    }
    else if(key<arr[mid]){
        e=mid-1;
    }
    mid=e+(s-e)/2;
}
return result;
}   

// finding the last occurence in an array

int lastoccur(int arr[],int size,int key){
    int s=0,e=size-1;
    int result1=INT_MIN;
    int mid=s+(e-s)/2;
    while(s<=e){
        if (arr[mid]==key){
            result1=mid;
            s=mid+1;
        }
        else if (key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return result1;
}
int main()
{

    int arr[8] = {0, 0, 1, 1, 2, 2, 2, 2};
    int res = first_occurence(arr, 8, 2);
    cout << res << endl;
    int res2=lastoccur(arr,8,2);
    cout<< res2 << endl;

    return 0;
}
