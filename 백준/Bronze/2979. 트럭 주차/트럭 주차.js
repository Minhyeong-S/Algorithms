const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().split('\n');

const numbers = [];
const countArr = [...new Array(101)].map((_, i) => 0);
let result = 0;

for (let i = 0; i < input.length; i++) {
  if (input[i] !== '') {
    numbers.push(input[i].split(' ').map((v) => +v));
  }
}

for (let i = 1; i < 4; i++) {
  for (let j = numbers[i][0]; j < numbers[i][1]; j++) {
    countArr[j]++;
  }
}

for (let i = 0; i < 100; i++) {
  switch (countArr[i]) {
    case 0:
      break;
    case 1:
      result += numbers[0][0];
      break;
    case 2:
      result += numbers[0][1] * 2;
      break;
    case 3:
      result += numbers[0][2] * 3;
      break;
  }
}

console.log(result);
