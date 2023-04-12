// Example of O(n^2)
// It runs n * n = n^2 times
function logItems(n) {
     for(let i = 0; i < n; i++) {
         for(let j = 0; j < n; j++) {
             console.log(i, j) 
         }       
     } 
 }
 
 logItems(10)