
/// Determine whether a sentence is a pangram.
pub fn is_pangram(sentence: &str) -> bool {
    let normalized = sentence.chars().filter(|c| c.is_ascii_alphabetic()).collect::<String>().to_lowercase();
    for c in "abcdefghijklmnopqrstuvwxyz".chars() {
        if !normalized.contains(c) {
            return false;
        }
    }
    true
}
