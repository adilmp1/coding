var number1 = document.querySelectorAll(".btn").length;

function playAudio(){
    var audio = new Audio('Aathi-Ringtone.mp3');
    audio.play();
}
for(i=0;i<number1;i++)
{
    document.querySelectorAll(".btn")[i].addEventListener("click",playAudio);
}

