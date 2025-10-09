public static class Languages
{
    public static List<string> NewList()
    {
        return new List<string>();
    }

    public static List<string> GetExistingLanguages(List<string> languages = null)
    {
        if (languages == null) 
            languages = new List<string> { "C#", "Clojure", "Elm" };
        return languages;
    }

    public static List<string> AddLanguage(List<string> languages, string language)
    {
        languages.Add(language);
        return languages;
    }

    public static int CountLanguages(List<string> languages)
    {
        return languages.Count;
    }

    public static bool HasLanguage(List<string> languages, string language)
    {
        return languages.Contains(language);
    }

    public static List<string> ReverseList(List<string> languages)
    {
        List<string> result = new List<string>();
        for (int i = languages.Count - 1; i >= 0; i--) 
        {
            result.Add(languages[i]);
        }
        return result;
    }

    public static bool IsExciting(List<string> languages)
    {
        return (languages.IndexOf("C#") == 0) || (languages.IndexOf("C#") == 1 && (languages.Count == 2 || languages.Count == 3));
    }

    public static List<string> RemoveLanguage(List<string> languages, string language)
    {
        languages.Remove(language);
        return languages;
    }

    public static bool IsUnique(List<string> languages)
    {
        HashSet<string> unique = new HashSet<string>();
        foreach (string lang in languages)
        {
            if (!unique.Add(lang))
                return false;
        }
        return true;
    }
}
