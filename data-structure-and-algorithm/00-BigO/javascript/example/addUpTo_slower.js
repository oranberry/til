// Calculates the sum of all numbers from 1 up to some number n (including).
// Regardless of the exact number, the number of operations grows roughly proportionally with n
// Number of operations is (eventually) bounded by a multiple of n.
// O(n)
function addUpTo(n) {
  let total = 0;
  for (let i = 1; i <= n; i++) {
    total += i;
  }
  return total;
}

console.log(addUpTo(6));

let t1 = performance.now();
addUpTo(1000000000);
let t2 = performance.now();
console.log(`Time Elapsed: ${(t2 - t1) / 1000} seconds.`)