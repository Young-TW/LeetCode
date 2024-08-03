#include <string>
#include <vector>

class Solution {
public:
    int countSeniors(std::vector<std::string>& details) {
        int count = 0;
        for (auto detail : details) {
            int age = std::stoi(detail.substr(11, 2));
            if (age > 60) {
                count++;
            }
        }

        return count;
    }
};