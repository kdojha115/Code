
const prompt = require("prompt-sync")();

let a,b,c;
a = parseInt(prompt("Enter firsr number: "));
c = prompt("Enter sign: ");
b = parseInt(prompt("Second second number: "));

switch(c)
{
    case '+':
        console.log(a+b);
        break;
    case '-':
        console.log(a-b);
        break;
    case '*':
        console.log(a*b);
        break;
    case '/':
        console.log(a/b);
        break;
    case '^':
        console.log(a**b);
        break;
    default:
        console.log('Invalid');
        break;
}