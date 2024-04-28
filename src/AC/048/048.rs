impl Solution {
    pub fn rotate(matrix: &mut Vec<Vec<i32>>) {
        let mut res = vec![vec![0; matrix.len()]; matrix.len()];
        for i in 0..matrix.len() {
            for j in 0..matrix.len() {
                res[j][matrix.len() - i - 1] = matrix[i][j];
            }
        }

        *matrix = res;
    }
}