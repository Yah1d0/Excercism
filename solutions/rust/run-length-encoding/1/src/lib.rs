pub fn encode(source: &str) -> String {
    let mut res = String::new();
    let chars = source.chars().collect::<Vec<_>>();
    for chunk in chars.chunk_by(|a, b| a == b) {
        let count = chunk.len();
        let char = chunk[0];
        if count > 1 {
            res.push_str(&format!("{}{}", count, char));
        } else {
            res.push(char);
        }
    }
    res
}

pub fn decode(source: &str) -> String {
    let mut res = String::new();
    let mut chars = source.chars().peekable();
    while chars.peek().is_some() {
        let mut count_str = String::new();
        while let Some(&c) = chars.peek() {
            if c.is_ascii_digit() {
                count_str.push(c);
                chars.next();
            } else {
                break;
            }
        }
        let count: usize = count_str.parse().unwrap_or(1);
        if let Some(c) = chars.next() {
            res.push_str(&c.to_string().repeat(count));
        }
    }
    res
}
