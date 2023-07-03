const fs = require("fs");
let text = fs.readFileSync("tut3.txt","utf-8");
text = text.replace("kok","king of kotha");
console.log("the content of the file is");
console.log(text);
fs.writeFileSync("adil.txt",text);