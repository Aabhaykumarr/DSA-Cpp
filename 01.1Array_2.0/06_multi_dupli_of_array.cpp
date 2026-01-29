#include<iostream>
using namespace std;

void find_duplicate(int arr[],int size){
    int duplicate[7];
    int count=0;   // try to use vector insted
    for(int i=0;i<size;i++){
        int num=abs(arr[i]);
        int index=num-1; // to adjust the index
        if(arr[index]<0){
            duplicate[count++]=num;
        }
        else{
            arr[i]=-arr[i];
        }
               
        }
     for(int i=0;i<count;i++){
     cout<<duplicate[i];
    
    
    }
}
int main() {
     int arr[7]={1,2,6,8,6,8,7};
     find_duplicate(arr,7);
    return 0;
}