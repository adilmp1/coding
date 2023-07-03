console.log("this is mod where we write the functions like header files in c");

function add(arr)
{
    let sum=0;
    arr.forEach(element => {
        sum+=element;
    });
    return sum;
}
let name1 = "mom";
let name2 = "hey "+name1+"  ";

module.exports = {
    add:add,
    n1: name1,
    n2:name2
}