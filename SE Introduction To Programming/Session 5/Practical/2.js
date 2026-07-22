// Take user input
let meal = prompt("Enter your preferred meal time (breakfast, lunch, dinner, snack):");

// Convert input to lowercase
meal = meal.toLowerCase();

switch (meal) {
    case "breakfast":
        console.log("Suggested Dish: Masala Dosa");
        break;

    case "lunch":
        console.log("Suggested Dish: Veg Biryani");
        break;

    case "dinner":
        console.log("Suggested Dish: Paneer Butter Masala with Naan");
        break;

    case "snack":
        console.log("Suggested Dish: Samosa with Tea");
        break;

    default:
        console.log("Try some fruits!");
}