// var number1 = document.querySelectorAll(".btn").length;

function playAudio(){
    var audio = new Audio('Aathi-Ringtone.mp3');
    audio.play();
}
function alerrt(event)
{
    console.log(event);
}
document.addEventListener("keypress",alerrt);


