function isEligibleForOffer(age, totalOrderValue) {
    return age >= 18 && totalOrderValue > 500;
}

// Example 1
console.log(isEligibleForOffer(20, 750)); // true

// Example 2
console.log(isEligibleForOffer(16, 800)); // false

// Example 3
console.log(isEligibleForOffer(25, 450)); // false