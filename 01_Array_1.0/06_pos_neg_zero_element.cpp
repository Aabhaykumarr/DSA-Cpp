#include<iostream>
using namespace std;
 /* void pos(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            cout<<"the positive element";
        }
        else if(arr[i]==0){
            cout<<"the zero element"<<arr[i];
        }
        else{
            cout<<"the negative element"<<arr[i];
        }
    }
}
int main(){

    int arr[5]={-12,22,-34,0,34};
     pos(arr,5);
    return 0;
   
} */


// How can i write the code in postive=21,34 and Negative =-12,-34 formate search for it.
// THE FORMATTED WAy IS :-

void pos_neg_zero(int arr[],int size){
    int pos[7];
    int neg[7];
    int zero[7];
    int pcount=0,ncount=0,zcount=0;
    for(int i =0;i<size;i++){
        if(arr[i]>0){
            pos[pcount++]=arr[i];
        }
        else if(arr[i]<0){
            neg[ncount++]=arr[i];
        }
        else{
            zero[zcount++]=arr[i];
        }
    }
    cout<<"positive element:";
    for(int i=0;i<pcount;i++){
        cout<<pos[i];
        if(i!=(pcount-1)){
            cout<<",";
        }
    }

    cout<<"\n negative element:";
    for(int i=0;i<ncount;i++){
        cout<<neg[i];
        if(i!=(ncount-1)){
            cout<<",";
        }
    }

    cout<<"\n zero element:";
    for(int i=0;i<zcount;i++){
        cout<<zero[i];
        if(i!=(zcount-1)){
            cout<<",";
        }
    }

};
int main(){

  int  arr[7]={-11,21,0,-13,-24,66,75};
    pos_neg_zero(arr,7);
    return 0;
}