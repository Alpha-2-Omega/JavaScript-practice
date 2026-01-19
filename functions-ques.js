let input = prompt("enter a number");
let arr= [];
for(let i =1 ; i<= input ; i++){
    arr[i-1] = i;
}
console.log(arr);
const Sum = arr.reduce((prev, curr) => {
    return prev + curr;
})
console.log(Sum)
const Factorial = arr.reduce((prev, curr) => {
    return prev * curr;
})
console.log(Factorial)