#include<iostream>
using namespace std;

void uni_occur(int arr[],int size){
    int count =0;
    int visited[9]={0};
    for(int i=0;i<size;i++){
        if(visited[i]==1){
            continue;
        }

        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count=count+1;
                 visited[j]=1;
            }
           
        }
        
        cout<<"the occurence of"<<arr[i]<<"is = "<<count<<endl;
        count=0;

    }
};
int main (){

    int arr[9]={1,2,3,1,1,2,3,1,3};
    uni_occur(arr,9);
    return 0;
} // using hash or map it can be achieved in n time complexity. 