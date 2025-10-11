using System.Linq;

public static class Pangram
{
    public static bool IsPangram(string input)
    {
        char[] chars = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        return chars.All(c => input.ToLower().Contains(c));
    }
}
