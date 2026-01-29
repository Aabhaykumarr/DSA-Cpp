#include<iostream>
using namespace std;

  
   
 void print_arr(int arr[],int size ){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<endl;
        }
        
    };

int main(){

    
    /*
     cout<<arr[3]<<endl; //array intialisation and its calling 
             
     */

    /* 
        for(int i =0;i<5;i++){
          cout<<arr[i]<<endl; // printing array through loop
        
    }
                    */
                int arr[5]={12,13,14,21,11};
                    print_arr(arr,5);

    return 0 ;
}