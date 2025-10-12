// TODO: define the 'LogLevel' enum

public enum LogLevel
{
    Trace = 1,
    Debug = 2,
    Info = 4,
    Warning = 5,
    Error = 6,
    Fatal = 42,
    Unknown = 0
}
    
static class LogLine
{
    public static LogLevel ParseLogLevel(string logLine)
    {
        int sIndex = logLine.IndexOf('[');
        int eIndex = logLine.IndexOf(']');
        string level = logLine.Substring(sIndex + 1, eIndex - sIndex - 1);
        switch (level)
        {
            case "TRC":
                return LogLevel.Trace;
            case "DBG":
                return LogLevel.Debug;
            case "INF":
                return LogLevel.Info;
            case "WRN":
                return LogLevel.Warning;
            case "ERR":
                return LogLevel.Error;
            case "FTL":
                return LogLevel.Fatal;
            default:
                return LogLevel.Unknown;
        }
    }

    public static string OutputForShortLog(LogLevel logLevel, string message)
    {
        return $"{(int)logLevel}:{message}";
    }
}
