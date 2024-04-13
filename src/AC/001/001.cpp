#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> vec;
        for (int i=0;i<nums.size();i++){
            for (int j=nums.size()-1;j>i;j--){
                if (nums[i]+nums[j] == target){
                    vec = {i, j};
                    return vec;
                }
            }
        }

        return vec;
    }
};