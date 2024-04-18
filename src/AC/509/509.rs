impl Solution {
    pub fn fib(n: i32) -> i32 {
        if n == 0 || n == 1 {
            return n;
        }

        let mut dp = vec![0; (n + 1) as usize];
        dp[1] = 1;
        for i in 2..=n {
            dp[i as usize] = dp[(i - 1) as usize] + dp[(i - 2) as usize];
        }

        dp[n as usize]
    }
}