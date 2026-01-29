#include<iostream>
using namespace std;
        void sort_zo(int arr[],int size){
            int s=0;
            int e= size-1;
            while(s<e){  // here both loop is running indepently.yes we can do that also.
                if(arr[s]==0){  // already on safe place so no swap.
                    s++;
                } else if (arr[e]==1){
                    e--;
                } else{
                    swap(arr[s],arr[e]);
                }
                  
        }
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }  

 int main (){
    int arr[10]={0,1,1,1,0,0,1,0,1,1};
    sort_zo(arr,10);
    return 0;
 }