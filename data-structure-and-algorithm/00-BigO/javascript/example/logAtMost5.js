// O(1) time
// O(1) space
// if n is 2, then the loop runs two times. 
// If n is approaching 1000(any number more than 5), this loop runs only five times (A static at five).
function logAtMost5(n) {
    for (var i = 1; i <= Math.min(5, n); i++) {
      console.log(i);
    }
  }
logAtMost5(2) // 2 times
logAtMost5(100) // 5 times
logAtMost5(100000) // 5 times