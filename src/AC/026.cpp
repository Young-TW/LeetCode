// LeetCode: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) return 0;

        int flag = nums[0];
        int count = 1;
        for (int i=1; i<nums.size();) {
            if (nums[i] == flag) {
                nums.erase(nums.begin() + i);
            } else {
                flag = nums[i];
                count++;
                i++;
            }
        }

        return count;
    }
};