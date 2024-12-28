#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex; 
        int maxLength = 0;
        int left = 0;
        
        for (int right = 0; right < s.length(); ++right) {
            if (charIndex.find(s[right]) != charIndex.end()) {
                left = max(left, charIndex[s[right]] + 1);
            }
            
            charIndex[s[right]] = right;
            
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};
