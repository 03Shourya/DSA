class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        vector<vector<int>>buckets(n+1);
        for(auto it=freq.begin();it!=freq.end();it++)
        {
            int num=it->first;
            int f=it->second;
            buckets[f].push_back(num);
        }
        vector<int>res;
        for(int i=n;i>=0 && res.size()<k;i--)
        {
            for(int j=0;j<buckets[i].size();j++)
            {
                res.push_back(buckets[i][j]);
                if(k==res.size())
                {
                    break;
                }
            }
        }
        return res;
    }
};