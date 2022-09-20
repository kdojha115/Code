

// Baby weather app (conditionals)
// if rain 'Grab your umbrella'
//else 'Wear your sunglasses'

const prompt = require("prompt-sync")();

let weather = prompt('What is weather report? ');

if(weather == 'rain'){
    console.log('Grab your umbrella');
}
else{
    console.log('Wear your sunglasses');
}