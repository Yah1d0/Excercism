static class SavingsAccount
{
    public static float InterestRate(decimal balance)
    {
        // 3.213% ==> negative balancr
        if (balance < 0)
        {
            return 3.213f;
        }
        // 0.5% ==> positive balance less than 1000
        else if (balance < 1000)
        {
            return 0.5f;
        }
        // 1.621% ==> balance more than 1000 and less than 5000
        else if (balance < 5000)
        {
            return 1.621f;
        }
        // 2.475% ==> balance more 500 or else
        else 
        {
            return 2.475f;
        }
    }

    public static decimal Interest(decimal balance)
    {
        // balance multiplied by interest rate percebt of it
        return balance * (decimal)InterestRate(balance) / 100m;
    }

    public static decimal AnnualBalanceUpdate(decimal balance)
    {
        // balance and interest of balance
        return balance + Interest(balance);
    }

    public static int YearsBeforeDesiredBalance(decimal balance, decimal targetBalance)
    {
    // Years is adding tiil balance is not equal to target balance, or if balance already equal or higher than returns 0
        int years = 0;
        if (balance == targetBalance || balance > targetBalance) return 0; 
        do
        {
            balance = AnnualBalanceUpdate(balance);
            years++;
        } while (balance < targetBalance);
        return years;
    }  
}
