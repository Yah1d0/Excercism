use std::collections::HashMap;

pub fn check(candidate: &str) -> bool {
    let mut map: HashMap<char, u32> = HashMap::new();
    let candidate = candidate
        .to_lowercase()
        .chars()
        .filter(|c| c.is_ascii_alphabetic())
        .collect::<String>();
    candidate
        .chars()
        .for_each(|c| *map.entry(c).or_insert(0) += 1);
    map.values().all(|&v| v == 1)
}