
// pattern based selection move a step ford and b step backward then return the arrar element .

#include<iostream>
#include<vector>
using namespace std;
vector <int>  step_for_back(int arr[],int size){
    vector <int> ans;
    int i=0;
    while(i<size-1){
        i+=2;      // we can skip as many step as we want.
        i--;
       ans.push_back(arr[i]);
    }
    return ans;
}

int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    vector <int> result=step_for_back(arr,9);
    for(const auto& vec : result ){
        cout<<vec<<" ";
    }

    return 0;
}