#include <vector>

class Solution {
public:
    int climbStairs(int n) {
        std::vector<int> stair_solution_n = {1, 2};
        stair_solution_n.resize(n);
        for (int i = 2; i < n; i++) {
            stair_solution_n[i] =
                stair_solution_n[i - 1] + stair_solution_n[i - 2];
        }

        return stair_solution_n[n - 1];
    }
};