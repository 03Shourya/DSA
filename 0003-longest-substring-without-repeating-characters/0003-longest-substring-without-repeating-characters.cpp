class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex;
        int maxLength = 0;
        int start = 0; // Start index of current window

        for (int end = 0; end < s.length(); end++) {
            char currentChar = s[end];

            // If the character is already in the map and its index is within the current window
            if (charIndex.find(currentChar) != charIndex.end() && charIndex[currentChar] >= start) {
                start = charIndex[currentChar] + 1; // Move the start right after the repeated character
            }

            charIndex[currentChar] = end; // Update the last seen index
            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};