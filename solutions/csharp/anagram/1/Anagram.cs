using System.Linq;

public class Anagram
{
    private string baseWord;
    private string bW;
    public Anagram(string baseWord)
    {
        this.baseWord = baseWord.ToLower();
        this.bW = String.Concat(this.baseWord.OrderBy(c => c));
    }

    public string[] FindAnagrams(string[] potentialMatches)
    {
        return potentialMatches.Where(w => String.Concat(w.ToLower().OrderBy(c => c)) == bW && w.ToLower() != baseWord).ToArray();
    }
}