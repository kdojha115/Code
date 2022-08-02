let cl = process.argv;
let n = parseInt(cl[2]);

let isPrime = true;
for(let i=2;i*i<=n;i++){
    if(n%i == 0){
        isPrime = false;
        break;
    }
}

if(isPrime == true){
    console.log(n +" is prime");

}
else{
    console.log(n+" is not prime");
}