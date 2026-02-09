 /*

 Print Like A Wave
Difficulty: Easy
Problem Statement
For a given two-dimensional integer array/list ARR of size (N x M), print the ARR in a sine wave order, i.e.,
print the first column from top to bottom,
then the next column from bottom to top,
then again top to bottom, and so on.
Example
Input Matrix:
1 2
3 4
Output:
1 3 2 4  

*/
#include<bits/stdc++.h>
using namespace std;
vector <int> wave_araay(int arr[][2],int nrows,int ncols){    //for 2-d array use type as vector<vector<int>>.
    vector<int> ans;  // we want 1-d array as output. for 2-d array use vector<vector<int>> and also for the function return type .
    for(int c=0;c<ncols;c++){
        if(c&1){
            for(int r=nrows-1;r>=0;r--){
                ans.push_back(arr[r][c]);
            }
        } else{
            for(int r=0;r<nrows;r++){
                ans.push_back(arr[r][c]);
            }
        }
    }
    return ans;
}
int main (){
    int arr[2][2]={1,2,3,4};
    int nrows=2,ncols=2;
    for(int i=0;i<nrows;i++){
        for(int j=0;j<ncols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

      vector <int> output= wave_araay(arr,nrows,ncols);
      for(int i:output){
        cout<<i<<" ";
      }

    return 0;
}