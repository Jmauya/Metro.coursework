public class Main {
    public static void main(String[] args) {
        double basePrice = 500.0;

        TicketBooking booking = new TicketBooking(new RegularPricing());
        System.out.println("Regular: " + booking.getFinalPrice(basePrice));

        booking.setStrategy(new StudentPricing());
        System.out.println("Student: " + booking.getFinalPrice(basePrice));

        booking.setStrategy(new SeniorPricing());
        System.out.println("Senior: " + booking.getFinalPrice(basePrice));

        booking.setStrategy(new GroupPricing(12));
        System.out.println("Group (12, capped at 40%): " + booking.getFinalPrice(basePrice));
    }
}
