class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int>freq;
       int n=nums.size();
       int maxi=0;
       int value=0;
       for(int i=0;i<n;i++)
       {
        freq[nums[i]]++;
        if(freq[nums[i]]>maxi)
        {
            maxi=freq[nums[i]];
            value=nums[i];
        }
       } 
       return value;
    }
};