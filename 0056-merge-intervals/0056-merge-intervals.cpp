class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>merged;
        merged.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if(merged.back()[1]>=intervals[i][0])
            {
                merged.back()[1]=max(merged.back()[1],intervals[i][1]);
            }
            else
            {
                merged.push_back(intervals[i]);
            }
        }
        return merged;

    }
};