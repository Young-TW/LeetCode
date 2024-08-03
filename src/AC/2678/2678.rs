impl Solution {
    pub fn count_seniors(details: Vec<String>) -> i32 {
        let mut cnt = 0;
        for i in 0..details.len() {
            let age: i32 = details[i][11..13].parse().unwrap();
            if age > 60 {
                cnt += 1;
            }
        }

        cnt
    }
}
