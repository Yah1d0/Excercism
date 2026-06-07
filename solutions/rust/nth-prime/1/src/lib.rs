pub fn nth(n: u32) -> u32 {
    let mut primes: Vec<u32> = Vec::new();
    for i in 2..1000000 {
        if is_prime(i) {
            primes.push(i);
        }
    }
    primes[n as usize]
}

pub fn is_prime(n: u32) -> bool {
    for i in 2..=n.isqrt() {
        if n.is_multiple_of(i) {
            return false;
        }
    }
    true
}