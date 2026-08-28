pub struct PascalsTriangle {
    rows: Vec<Vec<u32>>,
}

impl PascalsTriangle {
    pub fn new(row_count: u32) -> Self {
        if row_count == 0 {
            return PascalsTriangle { rows: vec![] };
        }
        let mut p = PascalsTriangle {
            rows: vec![vec![1]],
        };
        for r in 1..row_count {
            let back_row = p.rows[(r - 1) as usize].clone();
            let mut curr: Vec<u32> = Vec::new();
            for w in back_row.windows(2) {
                curr.push(w.iter().sum());
            }
            curr.insert(0, 1);
            curr.push(1);
            p.rows.push(curr);
        }
        p
    }

    pub fn rows(&self) -> Vec<Vec<u32>> {
        self.rows.clone()
    }
}
