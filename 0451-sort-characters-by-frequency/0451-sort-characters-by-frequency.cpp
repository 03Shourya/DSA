class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char ,int>freq;
        for(int i=0;i<s.length();i++)
        {
            freq[s[i]]++;
        }
        sort(s.begin(),s.end(), [&](char a, char b) {return freq[a] > freq[b] || (freq[a] == freq[b] && a < b);; });

        return s;

        

    }
};