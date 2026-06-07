pub fn sum_of_multiples(limit: u32, factors: &[u32]) -> u32 {
    let mut vec: Vec<u32> = Vec::new();
    for n in factors {
        if *n == 0 { continue };
        let mut i = *n;
        while i < limit {
            vec.push(i);
            i += n;
        }
    }
    vec.sort_unstable();
    vec.dedup();
    vec.iter().sum()
}
