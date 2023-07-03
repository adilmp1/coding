const fs = require('fs');
const http = require('http');
const fileContent = fs.readFileSync('html files/tut28.html');

const server = http.createServer((req,res)=>{
    res.writeHead(200,{'content-type':'text/html'});
    res.end(fileContent);
});

server.listen = (80,'27.0.0.1',()=>{
    console.log("listening on port 80");
});