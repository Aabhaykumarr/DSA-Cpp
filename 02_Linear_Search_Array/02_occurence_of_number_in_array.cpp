#include<iostream>
using namespace std;

int linear_search(int arr[],int size,int key){
    int key_arr[6];
    int kcount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            key_arr[kcount++]=arr[i];
            
        }
    }
      // print the element
    for(int i=0;i<kcount;i++){
        cout<<key_arr[i];
        if(i !=(kcount-1)){
            cout<<",";
            
        }
    }
    cout<<"\n"<<kcount<<endl;
    if(kcount==0){
        cout<<"the element is not in array";
    }
};
int main (){
    int arr[6]={2,3,2,5,2,7};
    int key;
    cout<<"enter the element you want to check its occurence : ";
    cin>>key;
   int element= linear_search( arr,6,key) ;
    
    
    return 0;
}