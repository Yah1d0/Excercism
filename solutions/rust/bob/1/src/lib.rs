pub fn reply(message: &str) -> &str {
    if message.trim().is_empty() {
        return "Fine. Be that way!";
    }
    let is_question = message.trim().chars().last().unwrap().eq(&'?');
    let is_caps_lock = message
        .trim()
        .chars()
        .filter(|c| c.is_ascii_alphabetic())
        .all(|c| c.is_uppercase())
        && message.trim().chars().any(|c| c.is_ascii_alphabetic());
    match (is_question, is_caps_lock) {
        (true, true) => "Calm down, I know what I'm doing!",
        (true, false) => "Sure.",
        (false, true) => "Whoa, chill out!",
        _ => "Whatever.",
    }
}

