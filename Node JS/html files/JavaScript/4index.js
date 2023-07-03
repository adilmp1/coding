var number1 = Math.floor((Math.random())*6)+1;
var address1 = "images/dice"+number1+".png";
document.querySelectorAll("img")[0].setAttribute("src",address1);

var number2 = Math.floor((Math.random())*6)+1;
var address2 = "images/dice"+number2+".png";
document.querySelectorAll("img")[1].setAttribute("src",address2);
// console.log(address1);