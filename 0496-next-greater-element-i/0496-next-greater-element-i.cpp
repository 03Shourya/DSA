class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>nge;
        for(int i=0;i<nums2.size();i++)
        {
            while(!st.empty() && nums2[i]>st.top())
            {
                nge[st.top()]=nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        vector<int>result;
        for(int i=0;i<nums1.size();i++)
        {
            if(nge.count(nums1[i])) result.push_back(nge[nums1[i]]);
            else result.push_back(-1);
        }
        return result;
    }
};