// Take user input
let age = Number(prompt("Enter your age:"));

// Check eligibility
if (age >= 18) {
    console.log("Eligible for Driving License");

    if (age >= 21) {
        console.log("Eligible for Credit Card");

        if (age >= 25) {
            console.log("Eligible for Car Rental");
        }
    }
} else {
    console.log("Not eligible for Driving License, Credit Card, or Car Rental.");
}