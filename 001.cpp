#include <iostream>
#include <vector>
using namespace std;

void twoSum(vector<int> nums, int target){
    int a = 0;
    int b = 0;
    for (int i=0;i<nums.size();i++){
        for (int j=nums.size();j>=i;j--){
            a=nums[i];
            b=nums[j];
            if (a+b == target){
                cout << "[" << i << "," << j << "]";
            }
        }
    }
}

int main() {
    vector<int> v = {2,7,11,15,37,1,23};
    int target = 26;
    twoSum(v,target);
    return 0;
} 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> array;
        for (int i=0;i<nums.size();i++){
            for (int j=nums.size()-1;j>i;j--){
                if (nums[i]+nums[j] == target){
                    array.push_back(i);
                    array.push_back(j);
                    return array;
                }
            }
        }
        return array;
    }
};