class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        nums3.insert(nums3.begin(), nums1.begin(), nums1.end());
        nums3.insert(nums3.end(), nums2.begin(), nums2.end());
        sort(nums3.begin(),nums3.end());
        int mid = nums3.size()/2;
        return (double)(nums3.size()%2==0)?(nums3[mid-1]+nums3[mid])/2.0 : nums3[mid]; 
        
    }
};