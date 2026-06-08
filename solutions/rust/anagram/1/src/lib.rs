use std::collections::HashSet;

pub fn anagrams_for<'a>(word: &str, possible_anagrams: &[&'a str]) -> HashSet<&'a str> {
    let mut cor_anagrams: HashSet<&'a str> = HashSet::new();
    let word_lower = word.to_lowercase();
    let mut word_chars = word_lower.chars().collect::<Vec<_>>();
    for &anagram in possible_anagrams {
        let anagram_lower = anagram.to_lowercase();
        if word.len() != anagram.len() || word_lower == anagram_lower {
            continue;
        }
        let mut anagrams_chars = anagram_lower.chars().collect::<Vec<_>>();
        word_chars.sort_unstable();
        anagrams_chars.sort_unstable();
        if word_chars == anagrams_chars {
            cor_anagrams.insert(anagram);
        }
    }
    cor_anagrams
}
