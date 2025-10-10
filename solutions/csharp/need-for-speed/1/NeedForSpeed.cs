class RemoteControlCar
{
    public int speed;
    public int batteryDrain;
    public int distance = 0;
    public int battery = 100;
    // constructor for the 'RemoteControlCar' class
    public RemoteControlCar(int speed, int batteryDrain)
    {
        this.speed = speed;
        this.batteryDrain = batteryDrain;
    }
    // method which check if battery is drained
    public bool BatteryDrained()
    {
        return battery < batteryDrain;
    }
    // method which return distance driven
    public int DistanceDriven()
    {
        return distance;
    }
    // drive method which add speed to distance and take batteryDrain from battery
    public void Drive()
    {
        if (battery >= batteryDrain)
        {
            distance += speed;
            battery -= batteryDrain;
        }
    }
    // special nitro car 
    public static RemoteControlCar Nitro()
    {
        return new RemoteControlCar(50, 4);
    }
}

class RaceTrack
{
    private int distance;
    // constructor which create Race
    public RaceTrack(int distance)
    {
        this.distance = distance;
    }
    // check if car can finish race
    public bool TryFinishTrack(RemoteControlCar car)
    {
        return car.speed * (100 / car.batteryDrain) >= distance;
    }
}
