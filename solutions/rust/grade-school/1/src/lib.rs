use std::collections::HashMap;

pub struct School<'a> {
    students: Vec<&'a str>,
    classes: HashMap<u32, Vec<&'a str>>,
}

impl<'a> School<'a> {
    pub fn new() -> School<'a> {
        School {
            students: Vec::new(),
            classes: HashMap::new(),
        }
    }

    pub fn add(&mut self, grade: u32, student: &'a str) {
        if !self.students.contains(&student) {
            self.classes
                .entry(grade)
                .or_insert(Vec::new())
                .push(student);
            self.students.push(student);
        }
    }

    pub fn grades(&self) -> Vec<u32> {
        let mut grades = self.classes.keys().copied().collect::<Vec<_>>();
        grades.sort_unstable();
        grades
    }

    pub fn grade(&self, grade: u32) -> Vec<String> {
        let mut students = self
            .classes
            .get(&grade)
            .unwrap_or(&Vec::new())
            .iter()
            .map(|s| s.to_string())
            .collect::<Vec<_>>();
        students.sort_unstable();
        students
    }
}