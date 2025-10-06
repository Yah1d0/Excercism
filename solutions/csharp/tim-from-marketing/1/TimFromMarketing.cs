static class Badge
{
    public static string Print(int? id, string name, string? department)
    {
        string Id = (id != null) ? $"[{id}]" : null;
        string Name = name;
        string Department = (department != null) ? $"{department.ToUpper()}" : "OWNER";
        return (id != null) ? String.Join(" - ", new[] { Id, Name, Department }) : String.Join(" - ", new[] { Name, Department });
    }
}
