// Big O Simplifaction technique: "Drop Constants"
// The code below runs n + n = 2n times
// We can simplify O(2n) by dropping the constant = O(n)
// It doesn't matter if it's O(10n), O(100n), ...
function logItems(n) {
     for(let i = 0; i < n; i++) {
        console.log(i) 
     }
 
     for(let j = 0; j < n; j++) {
        console.log(j) 
     }       
 }
 
 logItems(3)