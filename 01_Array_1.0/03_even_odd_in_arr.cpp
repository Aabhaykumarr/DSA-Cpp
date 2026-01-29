#include<iostream>
using namespace std;

// by using two separate functions

/*
void print_even(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<"\t";
        }
    }
    
    cout<<"is even"<<endl;
};

void print_odd(int arr[],int size){
    for(int i=0;i<7;i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<"\t";
        }
    }
    
    cout<<"is odd"<<endl;
}; */

// by using only one function
void print_even_odd(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            cout<<arr[i];
            cout<<"is even, \t";
        }
        else{
            cout<<arr[i];
            cout<<"is odd, \t";
        }
        
    }
};
int main(){

    int arr[7]={21,22,23,24,25,26,27};
   /* print_even(arr,7);
    print_odd(arr,7);  */
    print_even_odd(arr,7);
    return 0;
}