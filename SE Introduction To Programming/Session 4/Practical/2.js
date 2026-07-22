function calculateFinalPrice(productPrice, discountPercentage, isMember) {
    // Apply the regular discount
    let finalPrice = productPrice - (productPrice * discountPercentage / 100);

    // Apply an extra 5% discount for members
    if (isMember) {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    return finalPrice;
}

// Example
let productPrice = 2000;
let discountPercentage = 20;
let isMember = true;

let finalPrice = calculateFinalPrice(productPrice, discountPercentage, isMember);

console.log("Original Price: ₹" + productPrice);
console.log("Discount: " + discountPercentage + "%");
console.log("Member: " + isMember);
console.log("Final Price: ₹" + finalPrice.toFixed(2));