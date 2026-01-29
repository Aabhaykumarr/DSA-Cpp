#include <iostream>
#include <limits.h>
using namespace std;

int BinarySearch(int arr[], int s, int e, int key){

    if( s>e )   
        return -1;

    int mid = (s+e)/2;

    if( arr[mid] == key )
        return mid;

    if( arr[mid] > key )
        return BinarySearch( arr, s, mid-1, key);

    else    
        return BinarySearch( arr, mid+1, e, key);

}

int main()
{

    int arr[8] = {0, 0, 1, 1, 1, 2, 2};

    int res = BinarySearch(arr, 0, 7, 1);

    cout << res << endl;

    return 0;
}