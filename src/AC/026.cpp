// Leetcode: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int flag = nums[0];
        for (int i=0; i<nums.size(); i++) {
            if (i == flag) {
                nums.erase(i);
            }

            flag = nums[i];
        }

        return 0;
    }
};