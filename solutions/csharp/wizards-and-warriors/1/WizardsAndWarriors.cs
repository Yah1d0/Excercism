abstract class Character
{
    public bool vulnerable = false;
    public string characterType;
    protected Character(string characterType)
    {
        this.characterType = characterType;
    }

    public abstract int DamagePoints(Character target);

    public virtual bool Vulnerable()
    {
        return vulnerable;
    }

    public override string ToString()
    {
        return $"Character is a {characterType}";
    }
}

class Warrior : Character
{
    public Warrior() : base("Warrior")
    {
    }

    public override int DamagePoints(Character target)
    {
        return target.Vulnerable() ? 10 : 6;
    }
}

class Wizard : Character
{
    public Wizard() : base("Wizard")
    {
        this.vulnerable = true;
    }

    public override int DamagePoints(Character target)
    {
        return vulnerable ? 3 : 12;
    }

    public void PrepareSpell()
    {
        this.vulnerable = false;
    }
}
