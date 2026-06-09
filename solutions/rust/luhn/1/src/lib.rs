pub fn is_valid(code: &str) -> bool {
    if code.chars().any(|c| !c.is_ascii_digit() && c != ' ') {
        return false;
    }
    let nums = code
        .chars()
        .filter(|&c| c != ' ')
        .map(|c| c.to_digit(10).unwrap_or(0))
        .rev()
        .collect::<Vec<_>>();
    if nums.len() <= 1 {
        return false;
    }
    let sum = nums
        .into_iter()
        .enumerate()
        .map(|(idx, n)| {
            if !idx.is_multiple_of(2) {
                if n * 2 < 10 { n * 2 } else { (n * 2) - 9 }
            } else {
                n
            }
        })
        .fold(0, |acc, n| acc + n);
    sum.is_multiple_of(10)
}
