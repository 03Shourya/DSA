class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      unordered_map<int,int>freq;
      int n=nums.size();
      vector<int>value;
      for(int i=0;i<n;i++)
      {
        freq[nums[i]]++;
        if(freq[nums[i]]>n/3)
        {
            if(std::find(value.begin(),value.end(),nums[i])==value.end())
             {
                value.push_back(nums[i]);
             }
        }
      } 
      return value; 
    }
};