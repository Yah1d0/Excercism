use std::collections::HashSet;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Palindrome {
    value: u64,
    factors: HashSet<(u64, u64)>,
}

impl Palindrome {
    pub fn value(&self) -> u64 {
        self.value
    }

    pub fn into_factors(self) -> HashSet<(u64, u64)> {
        self.factors
    }
}

pub fn is_palindrome(val: u64) -> bool {
    let binding = val.to_string();
    let mut chars = binding.chars();
    while let (Some(c1), Some(c2)) = (chars.next(), chars.next_back()) {
        if c1 != c2 {
            return false;
        }
    }
    true
}

pub fn palindrome_products(min: u64, max: u64) -> Option<(Palindrome, Palindrome)> {
    let mut minp: Option<Palindrome> = None;
    let mut maxp: Option<Palindrome> = None;
    for a in min..=max {
        for b in  a..=max {
            let n = a * b;
            if !is_palindrome(n) {
                continue;
            }
            let pair = (a, b);
            match &minp {
                Some(p) if p.value < n => {}
                Some(p) if p.value == n => {
                    minp.as_mut().unwrap().factors.insert(pair);
                }
                _ => {
                    minp = Some(Palindrome {
                        value: n,
                        factors: HashSet::from([pair]),
                    });
                }
            }
            match &maxp {
                Some(p) if p.value > n => {}
                Some(p) if p.value == n => {
                    maxp.as_mut().unwrap().factors.insert(pair);
                }
                _ => {
                    maxp = Some(Palindrome {
                        value: n,
                        factors: HashSet::from([pair]),
                    });
                }
            }
        }
    }
    minp.zip(maxp)
}
