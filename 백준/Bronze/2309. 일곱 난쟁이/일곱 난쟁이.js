const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let count = 0;
let arr = [];
let sum = 0;

rl.on('line', function (input) {
  arr[count] = +input;
  sum += +input;
  count++;
  if (count === 9) rl.close();
}).on('close', function () {
  arr.sort((a, b) => a - b);
  for (i = 0; i < 8; i++) {
    for (j = i + 1; j < 9; j++) {
      if (sum - arr[i] - arr[j] === 100) {
        for (k = 0; k < 9; k++) {
          if (k === i || k === j) continue;
          console.log(arr[k]);
        }
        return;
      }
    }
  }
});
