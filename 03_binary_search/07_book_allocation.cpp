#include<iostream>
#include<vector>
using namespace std;

    bool is_possible(const vector <int> & arr,int student,int mid ){
        int student_no = 1;
        int page_sum=0;

        for(int i=0;i<arr.size();i++){
            if(page_sum+arr[i]<=mid){
                page_sum=page_sum+arr[i];
            }
            else {
                student_no++;
                if(student_no>student || page_sum > mid ){
                    return false;
                }
                else {
                    page_sum=arr[i];
                }
            }
        }
        return true;
    }

    int allocation(vector <int> &arr,int student){
        int total_pages=0;
        for (int i =0;i<arr.size();i++){
            total_pages=total_pages+arr[i];
        }
        int s=0, e=total_pages;
        int mid = s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(is_possible(arr,student,mid)){
                ans =mid;
                e=mid-1;
            }
            else {
                s=mid+1;
            }
         mid = s+(e-s)/2;
        }
        return ans;
    }

int main (){

    vector <int> arr={10,20,30,40};
    cout<< allocation(arr,2)<<endl;
    return 0;
}
