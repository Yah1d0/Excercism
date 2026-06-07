pub fn is_armstrong_number(num: u32) -> bool {
    let n = num.to_string();
    let mut sum = 0;
    for c in n.chars() {
        sum += c.to_digit(10).unwrap().pow(n.len() as u32);
    }
    sum == num
}
