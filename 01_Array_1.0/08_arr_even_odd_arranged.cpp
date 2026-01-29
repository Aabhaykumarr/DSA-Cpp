#include<iostream>
using namespace std;

void even_odd(int arr[],int size){
    int even[5];
    int odd[5];
    int ecount=0,ocount=0; // It is to count and store the element in array 1 by 1 by incrementing as array index.
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even[ecount++]=arr[i];
        }
        else{
            odd[ocount++]=arr[i];
        }

    }
    // print the even array in comma separated manner
    cout<<"even:";
    for(int i=0;i<ecount;i++){
        cout<<even[i];
        
        if(i!=(ecount-1)){
            cout<<",";
        }
    }
    // print the odd array in comma separated manner
    cout<<"\n odd:";
    for(int i=0;i<ocount;i++){
        cout<<odd[i];
        if(i!=(ocount-1)){
            cout<<",";
        }
    }
};


int main(){


    int arr[7]={11,13,21,23,45};
    even_odd(arr,5);



    return 0;
}