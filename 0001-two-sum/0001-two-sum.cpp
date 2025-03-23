class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> sum;
        for(int i=0;i<n;i++)
        {
            int complement=target-nums[i];

            if(sum.find(complement)!=sum.end()){
                return{sum[complement],i};
                }
        
        sum[nums[i]]=i;
    }
    return {};  
    }
};