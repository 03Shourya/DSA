class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i,j=0;
        int zero=0,maxlen=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0) zero++;
            while(zero>k)
            {
                if(nums[j]==0)zero--;
                j++;
            }
        maxlen=max(maxlen,i-j+1);
        }
        return maxlen;
    }
};