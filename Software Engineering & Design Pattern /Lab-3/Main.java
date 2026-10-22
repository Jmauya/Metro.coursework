public class Main {
    public static void main(String[] args) {
  
        Vehicle[] vehicles = new Vehicle[] {
            new Car("CAR-101", 50.0),
            new Bike("BIKE-201", 20.0),
            new LuxuryCar("LUX-301", 150.0, 100.0)
        };

        int validDays = 6;
        System.out.println("Testing Valid Rental Duration (" + validDays + " days) ");
        for (Vehicle v : vehicles) {
            double cost = v.calculateRentalCost(validDays);
            v.printRentalDetails(validDays, cost);
        }

        int invalidDays = -3;
        System.out.println("Testing Invalid Rental Duration (" + invalidDays + " days)");
        for (Vehicle v : vehicles) {
            double cost = v.calculateRentalCost(invalidDays);
            v.printRentalDetails(invalidDays, cost);
        }
    }
}
