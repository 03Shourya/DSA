class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
    int total_beauty = 0;

    for (int i = 0; i < n; i++) {
        vector<int> freq(26, 0); 

        for (int j = i; j < n; j++) {
            freq[s[j] - 'a']++; 
            
          
            int max_freq = *max_element(freq.begin(), freq.end());
            int min_freq = INT_MAX;
            for (int f : freq) {
                if (f > 0) min_freq = min(min_freq, f);
            }
            
            total_beauty += (max_freq - min_freq);
        }
    }

    return total_beauty;
    }
};