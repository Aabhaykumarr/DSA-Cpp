#include<iostream>
using namespace std;

int sum_of_array(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=arr[i]+sum;
    }
    return sum;
}
float avg_of_array(int arr[],int size){
    
    int sum=0;
    for(int i=0;i<size;i++){
         sum=arr[i]+sum;
    }
     float avg=(float) sum/size;
     return avg;
}

int main(){

    int arr[5]={34,31,21,11,24};
  //  sum_of_array(arr,5); this line can be skipped as it is called directly in cout
   //  cout<<"the sum of the array is \t"<<sum_of_array(arr,5)<<endl;
    cout<<avg_of_array(arr,5)<<endl;
    return 0;
}