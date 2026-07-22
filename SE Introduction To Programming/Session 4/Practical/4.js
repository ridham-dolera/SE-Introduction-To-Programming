// Variables
let likes = 850;
let comments = 250;
let shares = 60;

// Check if the post is trending
let isTrending = (likes >= 1000) || (comments > 200 && shares >= 50);

// Print the result
console.log("Trending:", isTrending);