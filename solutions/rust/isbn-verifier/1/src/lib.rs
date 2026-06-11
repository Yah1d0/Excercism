pub fn is_valid_isbn(isbn: &str) -> bool {
    let isbn = isbn.replace('-', "");
    if isbn.len() != 10 {
        return false;
    }
    let mut total = 0;
    for (i, c) in isbn.chars().enumerate() {
        let val = match c {
            '0'..='9' => c.to_digit(10).unwrap(),
            'X' | 'x' if i == 9 => 10,
            _ => return false,
        };
        total += val * (10 - i as u32)
    }
    total.is_multiple_of(11)
}