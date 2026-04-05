const max = prompt("Enter the maximum number:");
const random = Math.floor(Math.random() * max) + 1;
let guess = prompt("Guess the number:");

while(true){
    if(guess == "quit"){
        console.log("You have quit the game.");
        break;
    }
    else if(guess == random){
        console.log("Congratulations! You guessed the number " + random);
        break;
    }
    else if(guess < random){
        guess = prompt("Too low! Try again or type 'quit' to exit:");
    }
    else{
        guess = prompt("Too high! Try again or type 'quit' to exit:");
    }
    
}