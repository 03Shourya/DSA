class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        std::unordered_map<char, char> mapping = {{')', '('}, {'}', '{'}, {']', '['}};

        for (char ch : s) {
            if (mapping.count(ch)) { // If it's a closing bracket
                char topElement = st.empty() ? '#' : st.top();
                if (topElement == mapping[ch]) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                st.push(ch); // Push opening bracket
            }
        }

        return st.empty(); 
    }
};