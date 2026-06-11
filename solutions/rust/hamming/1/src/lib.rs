/// Return the Hamming distance between the strings,
/// or None if the lengths are mismatched.
pub fn hamming_distance(s1: &str, s2: &str) -> Option<usize> {
    if s1.len() != s2.len() {
        return None;
    }
    let mut distance = 0usize;
    for (a, b) in s1.chars().zip(s2.chars()) {
        if a != b {
            distance += 1;
        }
    }
    Some(distance)
}

