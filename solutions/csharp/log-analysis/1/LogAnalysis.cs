public static class LogAnalysis 
{
    // TODO: define the 'SubstringAfter()' extension method on the `string` type
    public static string SubstringAfter(this string str, string delimeter)
    {
        return str.Substring(str.IndexOf(delimeter[delimeter.Length - 1]) + 1);
    }

    // TODO: define the 'SubstringBetween()' extension method on the `string` type
    public static string SubstringBetween(this string str, string delStart, string delEnd)
    {
        int startInx = str.IndexOf(delStart);
        int endInx = str.IndexOf(delEnd, startInx + delStart.Length);
        return str.Substring(startInx + delStart.Length, endInx - (startInx + delStart.Length));
    }
    // TODO: define the 'Message()' extension method on the `string` type
    public static string Message(this string log)
    {
        return log.SubstringAfter(": ");
    }

    // TODO: define the 'LogLevel()' extension method on the `string` type
    public static string LogLevel(this string log)
    {
        return log.SubstringBetween("[", "]");
    }
}