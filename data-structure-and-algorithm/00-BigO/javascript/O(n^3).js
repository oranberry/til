// Example of O(n^3)
// It runs n * n * n = n^3 times
function logItems(n) {
     for(let i = 0; i < n; i++) {
         for(let j = 0; j < n; j++) {
             for(let k = 0; k < n; k++) {
                 console.log(i, j, k) 
             }       
         }       
     } 
 }
 
 logItems(10)