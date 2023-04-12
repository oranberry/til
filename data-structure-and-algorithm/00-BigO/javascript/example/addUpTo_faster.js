// Calculates the sum of all numbers from 1 up to some number n (including).
// 3 simple operations(1 multiplication, 1 addition, 1 division), regardless of the size of n
// Always 3 operations => O(1)
function addUpTo(n) {
  return n * (n + 1) / 2;
}

console.log(addUpTo(6))

let time1 = performance.now();
addUpTo(1000000000);
let time2 = performance.now();
console.log(`Time Elapsed: ${(time2 - time1) / 1000} seconds.`)