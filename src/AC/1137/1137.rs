impl Solution {
    pub fn tribonacci(n: i32) -> i32 {
        let dp:Vec<i32> = vec![0, 1, 1];
        if n < 3 {
            return dp[n as usize];
        }

        let mut dp = dp;
        for i in 3..=n {
            dp.push(dp[(i - 1) as usize] + dp[(i - 2) as usize] + dp[(i - 3) as usize]);
        }

        dp[n as usize]
    }
}