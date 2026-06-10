pub fn series(digits: &str, len: usize) -> Vec<String> {
    digits
        .as_bytes()
        .windows(len)
        .map(|w| std::str::from_utf8(w).unwrap().to_string())
        .collect()
}

