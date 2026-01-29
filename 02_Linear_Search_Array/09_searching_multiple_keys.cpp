#include<iostream>
using namespace std;

int linear_search(int arr[],int keys[],int size){
    int arrfound[6];
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==keys[i])
        arrfound[count++]=arr[i];// this is very celever step to increment the array as well as counter simltaneous
    } 
    cout<<"the elements are"<<endl;
    for(int i=0;i<count;i++){
        cout<<arrfound[i]<<" ";
    }
    


}

int main (){
    int arr[6]={12,13,24,54,65};
    int n;
    cout<<"enter the no.of keys you want to search";
    cin>>n;
    cout<<"enter the keys you want to search"<<endl;
    int keys [6];
    
    for(int i=0;i<n;i++){
        cin>>keys[i];
    }
    linear_search(arr,keys,6);
    return 0;

}
// what will be the edge cases in it and their code.  search for element not found