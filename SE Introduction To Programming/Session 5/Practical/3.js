// Ask the user for the total cart amount
let amount = Number(prompt("Enter the total cart amount:"));
let finalAmount;

// Check discount using nested if
if (amount > 1000) {
    if (amount > 2000) {
        finalAmount = amount - (amount * 20 / 100);
        console.log("20% discount applied.");
    } else {
        finalAmount = amount - (amount * 10 / 100);
        console.log("10% discount applied.");
    }
} else {
    finalAmount = amount;
    console.log("No discount applied.");
}

// Print the final amount
console.log("Final Amount to Pay: ₹" + finalAmount.toFixed(2));