    function calculateTotal(itemPrice, quantity) {
        return itemPrice * quantity;
    }

    // Example
    let itemPrice = 250;
    let quantity = 3;

    let totalBill = calculateTotal(itemPrice, quantity);

    console.log("Total Bill Amount: ₹" + totalBill);