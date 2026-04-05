let size = "xl";
if(size === "xl"){
    console.log(`price ${250}`);
}
else if(size === "l"){
    console.log(`price ${200}`);
}
else if(size === "m"){
    console.log(`price ${100}`);
}
else  {
    console.log(`price ${50}`);
}


let str = "apple";
if((str[0] === "a" && str.length>3)){
    console.log("good string");
}
else{
    console.log("bad string");
}

let day = 5;
switch(day){
    case 1:
        console.log("mon");
        break;
    case 2:
        console.log("tue");
        break;
    case 3:
        console.log("wed");
        break;
    case 4:
        console.log("thu");
        break;
    case 5:
        console.log("fri");
        break;
    case 6:
        console.log("sat");
        break;
    case 7:
        console.log("sun");
        break;
    default:
        console.log(NA);
}


let num1=32;
let num2=47852;
if((num1%10)==(num2%10))
    {console.log("numbers have the samelast digit which is",num1%10);}
else
    {
        console.log("numbers don't have thesame last digit");

}



    
