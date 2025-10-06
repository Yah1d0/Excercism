class RemoteControlCar
{
    public int DistanceDriven = 0;
    public int BatteryPercentage = 100;
    
    public static RemoteControlCar Buy()
    {
        return new RemoteControlCar();
    }

    public string DistanceDisplay()
    {
        return $"Driven {DistanceDriven} meters";
    }

    public string BatteryDisplay()
    {
        return BatteryPercentage != 0 ? $"Battery at {BatteryPercentage}%" : "Battery empty";
    }

    public void Drive()
    {
        if (BatteryPercentage != 0)
        {
            DistanceDriven += 20;
            BatteryPercentage -= 1;
        }
    }
}
