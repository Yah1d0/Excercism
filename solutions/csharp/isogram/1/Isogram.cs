using System.Linq;

public static class Isogram
{
    public static bool IsIsogram(string word)
    {
        var letters = word.Where(Char.IsLetter).Select(Char.ToLower);
        return letters.Count() == letters.Distinct().Count();
    }
}
