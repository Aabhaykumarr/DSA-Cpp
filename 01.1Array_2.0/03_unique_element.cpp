#include<iostream>
using namespace std;
    int unique_element(int arr[],int size){
        int ans=0;
        for(int i=0;i<size;i++){
            ans=ans^arr[i];  // use of xor where a xor a is 0 .
        }
        return ans;
    };
    
int main(){

    int n;
    cout<<"enter the total element of array in only odd no.(2m+1) form ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int uni_ele=unique_element(arr,n);
    cout<<"\n"<<uni_ele<<endl;

    return 0;
}