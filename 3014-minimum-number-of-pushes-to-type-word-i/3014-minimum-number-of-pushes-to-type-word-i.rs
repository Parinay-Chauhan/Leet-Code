impl Solution {
    pub fn minimum_pushes(word: String) -> i32 {
        let n = word.len();
        let mut res = 0;
        for i in 0..n {
            res += (i / 8 + 1) as i32;
        }
        return res;
    }
}
