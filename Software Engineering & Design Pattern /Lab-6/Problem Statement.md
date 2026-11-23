
Problem 1: Movie Ticket Pricing System

Design Pattern: Strategy Pattern

Build a ticket-pricing Context that can switch pricing rules at runtime, with one pricing rule that needs a constructor parameter.

Requirements

Create an interface PricingStrategy with the method:

calculatePrice(double basePrice) — returns a double.

Create the following concrete strategies:

RegularPricing: Returns the base price unchanged.

StudentPricing: Applies a 20% discount to the base price.

SeniorPricing: Applies a 30% discount to the base price.

GroupPricing: Has its own constructor taking an int groupSize.

GroupPricing Calculation:

Applies a discount that scales with group size.

The discount is 5% per person in the group.

The maximum discount is capped at 40%.

For example, a group of 10 receives a 40% discount, not 50%.

Implement the discount capping logic manually.

Create a Context class TicketBooking:

Constructor takes a PricingStrategy.

Include setStrategy(PricingStrategy) to change the pricing strategy.

Include getFinalPrice(double basePrice) to delegate the calculation to the current strategy.

Main Class Requirements:

Create ONE TicketBooking object with a base price of 500.0.

Call getFinalPrice() four times, changing the strategy between each call:

RegularPricing

StudentPricing

SeniorPricing

GroupPricing for a group of 12 people

Demonstrate that the SAME booking object can adapt to different pricing rules at runtime.

Verify that the group discount correctly caps at 40% for 12 people.

Problem 2: Custom Pizza Ordering System

Design Pattern: Decorator Pattern

Build a pizza customiser using the Decorator Pattern, following the exact structure of the coffee demo, with one added twist: one topping must apply a percentage increase instead of a flat addition.

Requirements

Create an interface Pizza with the following methods:

getDescription() — returns a String.

getCost() — returns a double.

Create a concrete base class PlainPizza:

Implements Pizza directly.

Base cost: 200.0.

Description: "Plain Pizza".

Create an abstract class ToppingDecorator:

Implements Pizza.

Holds a protected Pizza wrappedPizza field, exactly like BeverageDecorator in the coffee demo.

Create the following concrete decorators:

CheeseTopping:

Adds 40.0 to the cost.

Appends " + Extra Cheese" to the description.

MushroomTopping:

Adds 30.0 to the cost.

Appends " + Mushroom" to the description.

StuffedCrustDecorator:

Instead of adding a flat amount, increases the wrapped pizza's current total cost by 15%.

Its getCost() must return wrappedPizza.getCost() * 1.15.

Appends " + Stuffed Crust" to the description.

Main Class Requirements:

Build at least TWO different pizzas using the same three toppings but in different wrapping orders.

Pizza 1:

Plain → Cheese → Mushroom → StuffedCrust

Pizza 2:

Plain → StuffedCrust → Cheese → Mushroom

Print the following for both pizzas:

Final description.

Final cost.
