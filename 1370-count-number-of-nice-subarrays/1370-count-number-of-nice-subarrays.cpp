class Solution {
private:
    int atmost(vector<int>& nums,int k)
    {
        int left=0,count=0;
        for(int right=0;right<nums.size();right++)
        {
            if(nums[right]%2==1)k--;
            while(k<0)
            {
                if(nums[left]%2==1)k++;
                left++;
            }
            count+=right-left+1;
        }
        return count;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};