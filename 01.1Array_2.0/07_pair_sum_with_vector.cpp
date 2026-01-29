/*
#include<iostream>
#include<vector>
using namespace std;
  vector<pair<int,int>> pairsum( int arr[],int size){
    vector<pair<int,int>> result;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){   // for(int j=0;j<size;j++) this logic will repeat the numbers like 4,1 and 1,4.
            if(arr[i]+arr[j]==5){
                result.push_back({arr[i],arr[j]});
            }
        }
    }
    return result;
};

int main (){

    int arr[7]={1,2,3,4,5,6,7};
  vector<pair<int,int>> pair_sum=pairsum( arr,7);
  for(const auto& pair : pair_sum){
    cout<<pair.first<<" "<<pair.second<<endl;
  }
   return 0;
}  
   // can implement this using two pointer approach.  */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int,int>> pairsum(int arr[],int size){
    sort(arr,arr+size);

    vector<pair<int,int>> result;
    int s=0;
    int e=size-1;
    while(s<e){
        int targetsum=arr[s]+arr[e];
        if(targetsum==9){
            result.push_back({arr[s],arr[e]});
            s++;
            e--;
        }
        else if (targetsum<9){
            s++;
        }
        else {    
            e--;
        }   
    }
    return result;
}

int main(){

    int arr [9]={7,8,2,3,5,1,9,6,4};
    vector<pair<int,int>> pair_sum=pairsum(arr,9);
    for(const auto& pair:pair_sum){
        cout<<pair.first<<" "<<pair.second<<endl;
    }

    return 0;
}


