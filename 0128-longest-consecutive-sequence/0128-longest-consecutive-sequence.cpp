class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=1;
        int last_smaller=INT_MIN;
        int longest=1;
        if(n==0) return 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]-1==last_smaller)
            {
                count++;
                last_smaller=nums[i];
            }
            else if(nums[i]!=last_smaller)
            {
                count=1;
                last_smaller=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
    }
};