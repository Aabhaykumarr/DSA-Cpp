#include<iostream>
using namespace std;

int linear_search(int arr[5],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        } 
    }
    return -1;
}
int main(){
   int arr[5]={11,12,13,23,0};
   int key;
   cout<<"Enter the element you want to serch among arrays of {11,12,13,23,0}:";
   cin>>key; 
   int element= linear_search(arr,5,key);

   if(element!=-1){ // it is used for priting 
    cout<<"the element is :"<<arr[element]<<"  "<<"and at index : "<<element<<endl;
   }
   else{
    cout<<"element is not present";
   }
   
    

    return 0;
}