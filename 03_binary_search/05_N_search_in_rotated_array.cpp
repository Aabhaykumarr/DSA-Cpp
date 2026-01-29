#include<iostream>
using namespace std;


int pivotelement(int arr[],int size){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if (arr[mid]>arr[0]){
            s=mid+1;
        } else {
            e=mid;
        }
       mid=s+(e-s)/2;
    }
    return mid;
}


int binarysearch(int arr[],int s,int e,int key){
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


int findelement(int arr[],int size,int key){
    int pivot=pivotelement(arr,7);
    if (arr[pivot]<=key && key<=arr[size-1]){
        return  binarysearch(arr,pivot,size-1,key);
    }
    else{
         return binarysearch(arr,0,pivot-1,key);
    }
   
    }

int main (){


    int arr[7] = {30, 40, 50, 60, 5, 10, 20};
    int key;
    cout<<"enter the key from {30, 40, 50, 60, 5, 10, 20}; "<<endl;
    cin>>key;
    
    cout << findelement(arr,7,key)<< endl;
    return 0;

}