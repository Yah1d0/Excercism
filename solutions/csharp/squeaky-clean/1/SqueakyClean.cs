using System.Text;

public static class Identifier
{
    public static string Clean(string identifier)
    {
        StringBuilder result = new StringBuilder(identifier);
        result.Replace(' ', '_').Replace("\0", "CTRL");
        for (int i = 0; i < result.Length; i++)
        {
            if (result[i] == '-' && i != result.Length - 1)
           {
                result.Remove(i, 1);
                result[i] = Char.ToUpper(result[i]);
           }
        }
        for (int i = 0; i < result.Length; i++)
        {
            if (char.IsSurrogate(result[i]) || (result[i] >= '\u03B1' && result[i] <= '\u03C9') || (result[i] >= '\u0370' && result[i] <= '\u03FF' && result[i] != 'Ο') || (!char.IsLetter(result[i]) && result[i] != '_'))
            {
                if (Char.IsHighSurrogate(result[i]))
                {
                    result.Remove(i, 2);
                    i--;
                }
                else
                {
                    result.Remove(i, 1);
                    i--;
                }
            }
        }
        return result.ToString();
    }
}
