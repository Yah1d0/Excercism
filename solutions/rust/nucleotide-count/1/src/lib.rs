use std::collections::HashMap;

pub fn count(nucleotide: char, dna: &str) -> Result<usize, char> {
    if !"ACGT".contains(nucleotide) {
        return Err(nucleotide);
    }
    let counts = nucleotide_counts(dna)?;
    Ok(*counts.get(&nucleotide).unwrap_or(&0usize))
}

pub fn nucleotide_counts(dna: &str) -> Result<HashMap<char, usize>, char> {
    let mut res = HashMap::from([('A', 0usize), ('C', 0usize), ('G', 0usize), ('T', 0usize)]);
    for nucleotide in dna.chars() {
        if let Some(count) = res.get_mut(&nucleotide) {
            *count += 1;
        } else {
            return Err(nucleotide);
        }
    }
    Ok(res)
}