const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().trim();

const result = input.split('').reverse().join('');

console.log(input === result ? 1 : 0);