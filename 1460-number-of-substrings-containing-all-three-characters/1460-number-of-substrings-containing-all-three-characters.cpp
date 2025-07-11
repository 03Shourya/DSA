class Solution {
public:
    int numberOfSubstrings(string s) {
        int res=0;
        int left=0;
        int count[3]={0};
        for(int right=0;right<s.length();right++)
        {
            count[s[right]-'a']++;

            while(count[0]>0 && count[1]>0 && count[2]>0)
            {
                count[s[left]-'a']--;
                left++;
            }
            res+=left;
        }
        return res;
    }
};