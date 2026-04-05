//in if we can print all if statement if true
let color = prompt("Enter color name:");
console.log(color);
  //Traffic Light System
  if(color === "red"){
    console.log("stop!");
  }
  if(color === "yellow"){
    console.log("slow down!");
  }
  if(color === "green"){
    console.log("go!");
  }

//but in else if we use after if and only print 1st right statement other will skip
let colors = "red";
  //Traffic Light System
  if(colors === "red"){
    console.log("stop!");
  }
  else if(colors === "yellow"){
    console.log("slow down!");
  }
  else if(colors === "green"){
    console.log("go!");
  }