const fs  = require('fs');
let text = fs.readFile("tut3.txt","utf-8",(a,b)=>{
    console.log(a,b);
});
console.log(text);