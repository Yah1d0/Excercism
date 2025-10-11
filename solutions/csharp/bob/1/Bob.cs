public static class Bob
{
    public static string Response(string statement)
    {
        string letters = "";
        foreach (char ch in statement)
        {
            if (Char.IsLetter(ch))
                letters += ch;
        }
        if (statement.Trim().Length == 0 || String.IsNullOrWhiteSpace(statement))
            return "Fine. Be that way!";
        int i = 0;
        foreach (char letter in letters)
        {
            if (Char.IsUpper(letter))
                i++;
        }
        if (i == letters.Length && !String.IsNullOrWhiteSpace(letters) && statement.Trim()[^1] == '?')
            return "Calm down, I know what I'm doing!";
        else if (i == letters.Length && !String.IsNullOrWhiteSpace(letters))
            return "Whoa, chill out!";
        else if (statement.Trim()[^1] == '?')
            return "Sure.";
        return "Whatever.";
    }
}