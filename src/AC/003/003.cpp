#include <string>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int length = 0;
        int start = 0;
        int end = 0;
        while (end < s.length()) {
            for (int i = start; i < end; i++) {
                if (s[i] == s[end]) {
                    start = i + 1;
                    break;
                }
            }

            length = std::max(length, end - start + 1);
            end++;
        }

        return length;
    }
};
