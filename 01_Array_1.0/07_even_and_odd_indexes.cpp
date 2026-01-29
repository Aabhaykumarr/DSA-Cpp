#include<iostream>
using namespace std;

void even(int arr[],int size){
    for(int i=0;i<size;i++){
        if (i%2==0){
            cout<<i<<"\t"<<arr[i]<<"is even"<<endl;
        }
        else{
            cout<<i<<"\t"<<arr[i]<<"is odd"<<endl;
        }
    }
}
int main(){

    int arr[5]={1,2,3,4,5};
    even(arr,5);
    return 0;
}
// this also has same problem as previous fin its soluton and make it in proper arrangement