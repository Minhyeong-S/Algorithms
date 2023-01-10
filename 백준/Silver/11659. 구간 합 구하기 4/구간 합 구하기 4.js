const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
const [N, M] = input[0].split(' ').map((v) => +v);
const numArr = input[1].split(' ').map((v) => +v);
let sumArr = new Array(N + 1).fill(0);
const output = [];

numArr.forEach((v, i) => {
  sumArr[i + 1] = sumArr[i] + v;
});

for (let i = 2; i < input.length; i++) {
  let [start, end] = input[i].split(' ').map((v) => +v);
  output.push(sumArr[end] - sumArr[start - 1]);
}

console.log(output.join('\n'));
