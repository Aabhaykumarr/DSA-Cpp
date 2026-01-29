#include<iostream>
#include<vector>
using namespace std;
    int my_square( const vector <int> &vec,int key) {
        int n=vec.size();
        int s=0,e=n-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if (vec[mid]*vec[mid]==key){
                return vec[mid];
            }
            else if (vec[mid]*vec[mid]>key){
                e=mid-1;
            }
            else if (vec[mid]*vec[mid]<key){
                ans=vec[mid];
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
int main (){
    
    vector <int> vec;
    int m;
    cout<<"enter the number for square root="<<endl;
    cin>>m;
    for(int i=0;i<m/2;i++)
    vec.push_back(i);
    //for(const  auto & vec : vec)
   // cout<<vec<<endl;
    int res= my_square(vec,m);
    cout<< res << endl;
    return 0;
}

// for precision  also .