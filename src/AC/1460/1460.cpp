#include <algorithm>
#include <vector>

class Solution {
public:
    bool canBeEqual(std::vector<int>& target, std::vector<int>& arr) {
        std::vector<int> sorted_target = target;
        std::vector<int> sorted_arr = arr;
        std::sort(sorted_target.begin(), sorted_target.end());
        std::sort(sorted_arr.begin(), sorted_arr.end());
        return sorted_target == sorted_arr;
    }
};
