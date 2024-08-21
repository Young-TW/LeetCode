impl Solution {
    pub fn strange_printer(s: String) -> i32 {
        let s = s.as_bytes();
        let n = s.len();
        let mut dp = vec![vec![0; n]; n];
        for i in (0..n).rev() {
            dp[i][i] = 1;
            for j in i+1..n {
                dp[i][j] = 1 + dp[i+1][j];
                for k in i+1..=j {
                    if s[i] == s[k] {
                        dp[i][j] = dp[i][j].min(dp[i+1][k-1] + dp[k][j]);
                    }
                }
            }
        }

        dp[0][n-1]
    }
}