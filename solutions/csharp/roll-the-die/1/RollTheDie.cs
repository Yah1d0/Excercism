public class Player
{
    public int RollDie()
    {
        Random result = new Random();
        return result.Next(1, 19);
    }

    public double GenerateSpellStrength()
    {
        Random result = new Random();
        return result.NextDouble() * 100.0;
    }
}
