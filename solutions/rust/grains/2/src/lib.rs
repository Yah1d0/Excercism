pub fn square(s: u32) -> u64 {
    2_u64.pow(s-1)
}

pub fn total() -> u64 {
    let mut res: u64 = 0;
    for i in 1..=64 {
        res += square(i);
    }
    res
}
