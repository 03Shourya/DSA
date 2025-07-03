class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            char c=s[i];
            if(c=='{') st.push('}');
            else if(c=='[') st.push(']');
            else if(c=='(') st.push(')');
            else{
                if(st.empty() || st.top()!=c) return false;
                st.pop();
            }

        }
        return st.empty();
    }
};