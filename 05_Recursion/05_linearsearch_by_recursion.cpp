#include<iostream>
using namespace std;

bool linear_search(int arr[], int size, int k ){

// base case 
    if(arr[0]==0){
        return false;
    }
    
    if(arr[0]==k){
        return true;
    } else {
        bool remaining_part = linear_search(arr+1,size-1,k);
        return remaining_part;
    }
}

int main(){
    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 2;
    bool ans = linear_search(arr, size, key);

    if(ans) {
        cout<<"present"<<endl;
    } else {
        cout<<"absent"<<endl;
    }
    return 0;
}