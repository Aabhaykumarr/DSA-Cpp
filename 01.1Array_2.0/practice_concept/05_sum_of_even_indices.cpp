#include<iostream>
using namespace std;

void sum_of_even_indices(int arr[],int size){
      int sum=0;
     for(int i=0;i<size;i++){
        if(i%2==0){
            sum=sum+arr[i];
        }
    }
    cout<<sum;
}

int main (){

    int arr[7]={1,2,3,4,5,6,7};
    sum_of_even_indices(arr,7);

    return 0;
}