#include<iostream>
using namespace std;
void occurence(int arr[],int size,int key){
    int oarr[6];
    int ocounter=0;
    int icounter=0;
    int index_arr[5];
    for (int i=0;i<size;i++){
        if(arr[i]==key){
            oarr[ocounter++]=arr[i];
            index_arr[icounter++]=i;
        }
    }
    // print the total occurences
    cout<<"the total no. of occurence is : "<<ocounter<<"\t";
    for(int i=0;i<ocounter;i++){
        cout<<oarr[i];
        if(i!=(ocounter-1)){
            cout<<",";
        }
        
    }
    // print the first and last occurences 
cout<<"\n the first occurence is at: "<<index_arr[0]<<"\t""and the last occurence is at: "<<index_arr[icounter-1];
    

};
int main(){

    int arr[6]={2,3,2,5,2,7};
    int key;
    cout<<"enter the element you want to find its occurence"<<endl;
    cin>>key;
    occurence(arr,6,key);
    return 0;
}
