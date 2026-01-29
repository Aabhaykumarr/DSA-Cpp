#include<iostream>
using namespace std;
int duplicate(int arr[],int size){
    int ans=0;
  //  int dup=0; // for single duplicate 
    
   
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
        }
    for(int i=0;i<size;i++){
        ans=ans^i;
    }
    
   return ans;
}
int main (){
    int arr[7]={1,2,3,1,4,5,6}; // array must be continuous from 1 to n and have exactly one array.
    cout<< duplicate(arr,7);
    return 0;
}