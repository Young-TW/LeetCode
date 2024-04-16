impl Solution {
    pub fn plus_one(digits: Vec<i32>) -> Vec<i32> {
        if digits.len() == 0 {
            return vec![1];
        }

        let mut digits_copy = digits.clone();
        for i in 0..digits_cpoy.len() {
            let index = digits_copy.len() - 1 - i;
            if digits_copy[index] == 9 {
                digits_copy[index] = 0;
            } else {
                digits_copy[index] += 1;
                return digits_copy;
            }
        }

        digits_copy.insert(0, 1);
    }
}