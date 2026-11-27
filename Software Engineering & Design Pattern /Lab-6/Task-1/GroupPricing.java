public class GroupPricing implements PricingStrategy {
    private int groupSize;

    public GroupPricing(int groupSize) {
        this.groupSize = Math.max(0, groupSize);
    }

    @Override
    public double calculatePrice(double basePrice) {
        double discountRate = Math.min(groupSize * 0.05, 0.40); // 5% per person, capped at 40%
        return basePrice * (1.0 - discountRate);
    }
}
