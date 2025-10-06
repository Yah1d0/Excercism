static class LogLine
{
    public static string Message(string logLine)
    {
        int MessageStart = logLine.IndexOf(' ');
        return logLine.Substring(MessageStart + 1).Trim();
    }

    public static string LogLevel(string logLine)
    {
        int LevelStart = logLine.IndexOf('[');
        int LevelEnd = logLine.IndexOf(']');
        return logLine.Substring(LevelStart + 1, LevelEnd - LevelStart - 1).ToLower();
    }

    public static string Reformat(string logLine)
    {
        return $"{Message(logLine)} ({LogLevel(logLine)})";
    }
}
