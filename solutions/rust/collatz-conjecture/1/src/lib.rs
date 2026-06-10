pub fn collatz(n: u64) -> Option<u64> {
    if n < 1 {
        return None;
    }
    let mut n = n;
    let mut i = 0;
    while n != 1 {
        match n.is_multiple_of(2) {
            true => n /= 2,
            false => n = n * 3 + 1,
        }
        i += 1;
    }
    Some(i)
}