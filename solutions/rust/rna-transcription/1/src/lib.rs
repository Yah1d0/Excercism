#[derive(Debug, PartialEq, Eq)]
pub struct Dna {
    s: String,
}

#[derive(Debug, PartialEq, Eq)]
pub struct Rna {
    s: String,
}

impl Dna {
    pub fn new(dna: &str) -> Result<Dna, usize> {
        let nucls = ['A', 'G', 'C', 'T'];
        dna.chars()
            .enumerate()
            .try_for_each(|(i, n)| if nucls.contains(&n) { Ok(()) } else { Err(i) })?;
        Ok(Dna { s: dna.to_string() })
    }

    pub fn into_rna(self) -> Rna {
        let mut rna = "".to_string();
        self.s.chars().for_each(|c| {
            rna.push(match c {
                'A' => 'U',
                'C' => 'G',
                'G' => 'C',
                'T' => 'A',
                _ => ' ',
            })
        });
        Rna { s: rna }
    }
}

impl Rna {
    pub fn new(rna: &str) -> Result<Rna, usize> {
        let nucls = ['A', 'G', 'C', 'U'];
        rna.chars()
            .enumerate()
            .try_for_each(|(i, n)| if nucls.contains(&n) { Ok(()) } else { Err(i) })?;
        Ok(Rna { s: rna.to_string() })
    }
}
