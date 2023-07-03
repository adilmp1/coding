var number1 = document.querySelectorAll(".btn").length;

function handleClick(){
    alert("Clicked");
}
for(i=0;i<number1;i++)
{
    document.querySelectorAll(".btn")[i].addEventListener("click",handleClick);
}

