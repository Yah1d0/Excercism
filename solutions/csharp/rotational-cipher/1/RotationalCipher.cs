using System.Text;

public static class RotationalCipher
{
    public static string Rotate(string text, int shiftKey)
    {
        StringBuilder result = new StringBuilder();
        foreach (char ch in text)
        {
            if (Char.IsLetter(ch))
            {
                char bas = Char.IsUpper(ch) ? 'A' : 'a';
                result.Append((char)((ch - bas + shiftKey) % 26 + bas));
            }
            else
                result.Append(ch);
        }
        return result.ToString();
    }
}