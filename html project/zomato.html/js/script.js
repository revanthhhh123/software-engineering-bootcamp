// Welcome message
window.addEventListener("load", () => {
    console.log("Welcome to Zomato");
});

// Search box functionality

const searchBox = document.getElementById("restaurants");

searchBox.addEventListener("keypress", function(event){

    if(event.key === "Enter"){

        const value = searchBox.value.trim();

        if(value === ""){
            alert("Please enter a restaurant name.");
        }
        else{
            alert("Searching for: " + value);
        }

    }

});

// Highlight input

searchBox.addEventListener("focus", () => {
    searchBox.style.backgroundColor = "#fff8f8";
});

searchBox.addEventListener("blur", () => {
    searchBox.style.backgroundColor = "white";
});

// Navbar hover animation

const links = document.querySelectorAll("header a");

links.forEach(link => {

    link.addEventListener("mouseenter", () => {
        link.style.transform = "scale(1.1)";
    });

    link.addEventListener("mouseleave", () => {
        link.style.transform = "scale(1)";
    });

});