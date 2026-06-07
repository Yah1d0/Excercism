pub fn raindrops(n: u32) -> String {
    let mut res = String::new();
    if n.is_multiple_of(3) {
        res.push_str("Pling");
    } if n.is_multiple_of(5) {
        res.push_str("Plang");
    } if n.is_multiple_of(7) {
        res.push_str("Plong");
    } if res.is_empty() { n.to_string() } else { res }
}
