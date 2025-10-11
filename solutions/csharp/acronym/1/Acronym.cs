using System.Linq;

public static class Acronym
{
    public static string Abbreviate(string phrase)
    {
        string p = new string(phrase.Where(c => Char.IsLetter(c) || c == '-' || c == ' ').ToArray());
        char[] separators = {' ', '-'};
        return String.Concat(p.Split(separators, StringSplitOptions.RemoveEmptyEntries).Select(s => Char.ToUpper(s[0])));
    }
}