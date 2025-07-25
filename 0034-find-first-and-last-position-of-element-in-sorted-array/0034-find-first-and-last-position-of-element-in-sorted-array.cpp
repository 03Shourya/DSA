class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      vector<int> p;
      p.push_back(-1);
      p.push_back(-1);
      int j=0;
      for(int i=0;i<nums.size();i++)
      {
        if(nums[i]==target)
        {
            if(p[0]==-1)
            {
                p[0]=i;
            }
            p[1]=i;
        }
    
      }
      return p;
    }
};