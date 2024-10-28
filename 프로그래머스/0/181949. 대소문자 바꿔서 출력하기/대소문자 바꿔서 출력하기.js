const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];

rl.on('line', function (line) {
    input = [line];
}).on('close',function(){
    str = input[0];
    const answer = [...str].map((item) => {
        if (item.charCodeAt() > 90) {
            return item.toUpperCase();
        } else {
            return item.toLowerCase();
        }
    }).join('');
    console.log(answer);
});