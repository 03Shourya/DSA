class Solution {
public:
    string reverseWords(string s) {
        int st=0;
        int n = s.length();
        for(int i=0;i<=n;i++)
        {
            if(i==n || s[i]==' ')
            {
                reverse(s.begin()+st,s.begin()+i);
                st=i+1;
            }
        }
        reverse(s.begin(),s.end());
        
        int i = 0, j = 0;
        while (j < n) {
        while (j < n && s[j] == ' ') j++; 
        while (j < n && s[j] != ' ') s[i++] = s[j++]; 
        while (j < n && s[j] == ' ') j++;  
        if (j < n) s[i++] = ' ';  
        }
        s.resize(i);

        return s;
    }
};