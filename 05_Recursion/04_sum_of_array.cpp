#include<iostream>
using namespace std;

int sum(int arr[],int size){
    
    if(size==0){
        return 0;

    } if(size==1){
        return arr[0];
    }
    int remaining = sum(arr+1,size-1);
    int ans = remaining + arr[0];
    return ans;
}
int main(){
    int arr[5]={2,4,3,5,3};
    int size=5;
    int ans=sum(arr,size);
    cout <<"sum is :" << ans <<endl;
    return 0;
}