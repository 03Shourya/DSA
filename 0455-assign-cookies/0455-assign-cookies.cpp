class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m=g.size();
        int n=s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int l=0; 
        int r=0;
        while(l<m && r<n)
        {
            if(g[l]<=s[r])
            {
                r++;
                l++;
            }else{
                r++;
            }
            
        }
        return l;
    }
};