#include <iostream>
#include <vector>
using namespace std;

vector<int> mergedarray(const vector<int>& nums1, const vector<int>& nums2) {
    int i = 0, j = 0;
    vector<int> merged;
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] <= nums2[j]) {
            merged.push_back(nums1[i]);
            i++;
        } else {
            merged.push_back(nums2[j]);
            j++;
        }
    }
    while (i < nums1.size()) {
        merged.push_back(nums1[i]);
        i++;
    }
    while (j < nums2.size()) {
        merged.push_back(nums2[j]);
        j++;
    }
    return merged;
}

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr = mergedarray(nums1, nums2);
        int n1 = arr.size();
        if (n1 % 2 == 0) {
            double result = (arr[n1 / 2] + arr[(n1 / 2) - 1]) / 2.0;
            return result;
        } else {
            int res = arr[n1 / 2];
            return res;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    
    cout << "Median: " << sol.findMedianSortedArrays(nums1, nums2) << endl;
    
    vector<int> nums3 = {1, 2};
    vector<int> nums4 = {3, 4};
    
    cout << "Median: " << sol.findMedianSortedArrays(nums3, nums4) << endl;
    
    return 0;
}