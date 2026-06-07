pub fn recite(start_bottles: u32, take_down: u32) -> String {
    let nums = vec!["no", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"];
    let mut res = "".to_string();
    let mut bottles_left = start_bottles;
    for _i in 0..take_down {
        res.push_str(&format!("{} green {} hanging on the wall,\n{} green {} hanging on the wall,\nAnd if one green bottle should accidentally fall,\nThere'll be {} green {} hanging on the wall.\n\n", 
            capitalize(nums[bottles_left as usize]),
            if bottles_left == 1 { "bottle" } else { "bottles" }, 
            capitalize(nums[bottles_left as usize]),
            if bottles_left == 1 { "bottle" } else { "bottles" }, 
            nums[(bottles_left - 1) as usize], 
            if (bottles_left - 1) == 1 { "bottle" } else { "bottles" }
        ));
        bottles_left -= 1;
    }
    res.trim().to_string()
}

pub fn capitalize(s: &str) -> String {
    let mut chars = s.chars();
    chars.next().unwrap().to_uppercase().collect::<String>() + chars.as_str()
}

