#include<iostream>
#include<climits>
using namespace std;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    // function for smallest
    int  smallest_num(int arr[],int size){
        for(int i=0;i<size;i++){
            if(arr[i]<smallest){
                smallest=arr[i];
                
            }
        }
        return -1;
    };
    int largest_num(int arr[],int size){
        for(int i=0;i<size;i++){
            if (arr[i]>largest){
                largest=arr[i];
                
            }
        }
        return -1;
    };
int main(){
    int arr[6]={21,23,27,24,43,99};
    smallest_num(arr,6);
    largest_num(arr,6);
    cout<<"the lrgest element is: "<<largest<<"\n"<<"the smallest element is : "<<smallest<<endl;


    return 0;
}






void print(int smallest_val, int smallest_index, int largest_val, int largest_index) {
    cout << "smallest=" << smallest_val << ", index=" << smallest_index << '\n';
    cout << "largest="  << largest_val  << ", index=" << largest_index  << '\n';
}

// int main() {
//     int arr[6] = {21, 23, 27, 24, 43, 99};
//     int n = 6;

//     int si = smallest_num(arr, n);
//     int li = largest_num(arr, n);

//     if (si == -1 || li == -1) {
//         cout << "Array is empty or invalid.\n";
//         return 0;
//     }

//     print(arr[si], si, arr[li], li);
//     return 0;
// }