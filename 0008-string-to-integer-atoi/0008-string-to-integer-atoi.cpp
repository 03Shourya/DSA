class Solution {
public:
    int myAtoi(string s) {
        long num=0;
        int i=0;
        int sign=1;

        while(i<s.length() && s.at(i)==' ')
        {
            i++;
        }
        if(i<s.length() && ((s[i]=='-')||(s[i]=='+')))
        {
            if(s[i]=='-') sign=-1;
            else sign=1;
            i++;
        }
        while(i<s.length() && isdigit(s[i]))
        {
            num=num*10+(s[i]-'0');

            if(num*sign>INT_MAX) return INT_MAX;
            if(num*sign<INT_MIN) return INT_MIN;
            i++;
        }
        return num*sign;
    }
};