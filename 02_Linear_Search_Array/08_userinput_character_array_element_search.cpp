#include<iostream>
using namespace std;
    int linear_search(char arr[],int size,char key){
        for (int i=0;i<size;i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    };
int main(){

    char arr[6];
    cout<<"Enter the 6 character for array element: ";
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    char key;
    cout<<"\n enter the key you want to search: ";
    cin>>key;
    int element =linear_search(arr,6,key);
    if(element==-1){
        cout<<"\n the character is not found ";
    } else{
        cout<<"\n the character is found at index : "<<element<<"\t and chracter is : "<<arr[element];
    }
    return 0;
}