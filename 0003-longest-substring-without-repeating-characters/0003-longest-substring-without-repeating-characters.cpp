class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int right=0,left=0;
        int Maxlen=0;
        while(right<s.size())
        {
            if(st.find(s[right])==st.end())
            {
                st.insert(s[right]);
                Maxlen=max(Maxlen,right-left+1);
                right++;
            }
            else
            {
                st.erase(s[left]);
                left++;
            }
        }
        return Maxlen;

    }
};