pub fn factors(n: u64) -> Vec<u64> {
    let mut res: Vec<u64> = Vec::new();
    let mut num = n;
    let mut i = 2;
    while num != 1 {
        if num.is_multiple_of(i) {
            num /= i;
            res.push(i);
        } else {
            i += 1;
        }
    }
    res
}
