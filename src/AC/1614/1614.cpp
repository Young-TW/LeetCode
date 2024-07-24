#include <string>

class Solution {
public:
    int maxDepth(std::string s) {
        int depth = 0;
        int high = 0;
        for (char c : s) {
            if (c == '(') depth++;
            if (c == ')') depth--;
            if (depth > high) high = depth;
        }

        return high;
    }
};