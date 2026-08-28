use crate::Classification::{Abundant, Deficient, Perfect};

#[derive(Debug, PartialEq, Eq)]
pub enum Classification {
    Abundant,
    Perfect,
    Deficient,
}

pub fn classify(num: u64) -> Option<Classification> {
    if num == 0 {
        return None;
    }
    if num == 1 {
        return Some(Deficient {});
    }
    match aliquot_sum(num) {
        n if n == num => Some(Perfect {}),
        n if n > num => Some(Abundant {}),
        n if n < num => Some(Deficient {}),
        _ => None,
    }
}

pub fn aliquot_sum(num: u64) -> u64 {
    let mut factors = Vec::new();
    for i in 1u64..num.isqrt() + 1 {
        if num.is_multiple_of(i) {
            factors.push(i);
            if (num / i != i) && (num / i != num) {
                factors.push(num / i);
            }
        }
    }
    factors.iter().sum()
}
