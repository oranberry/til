// O(n) time
// O(1) space
function logAtLeast5(n) {
  for (let i = 1; i <= Math.max(5, n); i++) {
    console.log(i);
  }
}

logAtLeast5(3) // 5 times
logAtLeast5(100) // 100 times
logAtLeast5(1000) // 1000 times
