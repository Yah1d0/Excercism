pub fn brackets_are_balanced(string: &str) -> bool {
    let filtered: String = string.chars().filter(|c| ['(', ')', '[', ']', '{', '}'].contains(c)).collect();
    let mut stack: Vec<char> = Vec::new();
    for c in filtered.chars() {
        match c {
            '(' | '[' | '{' => stack.push(c),
            ')' if stack.pop() != Some('(') => return false,
            ']' if stack.pop() != Some('[') => return false,
            '}' if stack.pop() != Some('{') => return false,
            _ => (),
        }
    }
    stack.is_empty()
}