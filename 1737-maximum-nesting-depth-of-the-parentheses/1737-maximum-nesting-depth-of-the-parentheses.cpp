class Solution {
public:
    int maxDepth(string s) {
        int c=0;
        int maxcount=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(') c++;
            if(s[i]==')')c--;
            maxcount=max(maxcount,c);
            
        }
        return maxcount;

    }
};