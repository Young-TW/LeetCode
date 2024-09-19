impl Solution {
    pub fn permute(nums: Vec<i32>) -> Vec<Vec<i32>> {
        // numbers are unique, return all the possible permutations
        fn permute_inner(nums: &Vec<i32>, start: usize, res: &mut Vec<Vec<i32>>) -> Vec<Vec<i32>> {
            if start == nums.len() {
                res.push(nums.clone());
            } else {
                for i in start..nums.len() {
                    let mut nums = nums.clone();
                    nums.swap(start, i);
                    permute_inner(&nums, start + 1, res);
                }
            }
            res.clone()
        }

        permute_inner(&nums, 0, &mut vec![])
    }
}
