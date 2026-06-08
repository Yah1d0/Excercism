pub fn annotate(garden: &[&str]) -> Vec<String> {
    if garden.is_empty() {
        return vec![];
    }
    let rows = garden.len() as usize;
    let cols = garden[0].len();
    let mut subres: Vec<Vec<char>> = vec![vec![' '; cols]; rows];
    let mut matrix: Vec<Vec<i32>> = vec![vec![0; cols]; rows];
    let dirs = [
        (-1, -1),
        (-1, 0),
        (-1, 1),
        (0, -1),
        (0, 1),
        (1, -1),
        (1, 0),
        (1, 1),
    ];
    for i in 0..rows {
        for j in 0..cols {
            if garden[i].chars().nth(j).unwrap() == '*' {
                matrix[i][j] = -1;
                dirs.iter().for_each(|v| {
                    let ni = i as isize + v.0;
                    let nj = j as isize + v.1;
                    if ni >= 0
                        && ni < rows as isize
                        && nj >= 0
                        && nj < cols as isize
                        && matrix[ni as usize][nj as usize] != -1
                    {
                        matrix[ni as usize][nj as usize] += 1
                    }
                });
            }
        }
    }
    for i in 0..rows {
        for j in 0..cols {
            match matrix[i][j] {
                -1 => subres[i][j] = '*',
                0 => subres[i][j] = ' ',
                _ => subres[i][j] = char::from_digit(matrix[i][j] as u32, 10).unwrap_or(' '),
            }
        }
    }
    subres
        .into_iter()
        .map(|v| v.into_iter().collect())
        .collect()
}

fn main() {}
