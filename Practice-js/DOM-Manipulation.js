// created a buttton

let newbtn = document.createElement("button");
newbtn.innerText = "click me";

newbtn.style.backgroundColor = "red";
newbtn.style.Color = "white";
document.querySelector("body").prepend(newbtn);

//q2
let para = document.querySelector("p");

//mouse functions
btn1.onclick = () => {
    console.log("btn1 was clicked");
};

let div = document.querySelector("div");
div.onmouseover = () => {
    console.log("you are inside div");
};

//toggle button
let modebtn = document.querySelector("#toggle");
let currMode = "light";
let body = document.querySelector("body");

modebtn.addEventListener("click", () => {
    if(currMode === "light"){
        currMode = "dark";
        body.classList.add("dark");
        body.classList.remove("light");
    } else{
        currMode = "light";
        body.classList.add("light");
        body.classList.remove("dark");

    }
    console.log(currMode);
});