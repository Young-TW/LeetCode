impl Solution {
    pub fn average_waiting_time(customers: Vec<Vec<i32>>) -> f64 {
        let mut time: f64 = 0.0;
        let mut wait: f64 = 0.0;
        for i in 0..customers.len() {
            time = time.max(customers[i][0] as f64) + customers[i][1] as f64;
            wait += time - customers[i][0] as f64;
        }

        wait as f64 / customers.len() as f64
    }
}