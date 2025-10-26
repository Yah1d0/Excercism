public static class SimpleCalculator
{
    public static string Calculate(int operand1, int operand2, string? operation)
    {
        try
        {
            switch (operation)
            {
                case "+": return $"{operand1} + {operand2} = {operand1 + operand2}"; 
                case "*": return $"{operand1} * {operand2} = {operand1 * operand2}";
                case "/": return $"{operand1} / {operand2} = {operand1 / operand2}";
                case "": throw new ArgumentException("Empty string can't be a operator");
                case null: throw new ArgumentNullException("Pls define an operator!");
                default: throw new ArgumentOutOfRangeException($"{operation} is not a valid operator");
            }
        }
        catch (DivideByZeroException)
        {
            return "Division by zero is not allowed.";
        }
    }
}
