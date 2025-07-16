class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> merged;
    int i = 0, j = 0;
    int m = nums1.size(), n = nums2.size();

   
    while (i < m && j < n) {
        if (nums1[i] < nums2[j])
            merged.push_back(nums1[i++]);
        else
            merged.push_back(nums2[j++]);
    }

    
    while (i < m)
        merged.push_back(nums1[i++]);
    while (j < n)
        merged.push_back(nums2[j++]);

    int total = m + n;
    if (total % 2 == 1) {
        return merged[total / 2];
    } else {
        return (merged[total / 2 - 1] + merged[total / 2]) / 2.0;
    }
}
};