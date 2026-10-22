public class Bike extends Vehicle {
    protected double dailyRate;

    public Bike(String vehicleId, double dailyRate) {
        super(vehicleId);
        this.dailyRate = dailyRate;
    }

    @Override
    
    public double calculateRentalCost(int days) {
        if (days <= 0) {
            return 0.0; 
        }
        double cost = dailyRate * days;
        
  
        if (days > 5) {
            cost *= 0.90;
        }
        return cost;
    }
}
