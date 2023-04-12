// Big O Simplifaction technique: "Drop Non-Dominants"
// O(n^2) + O(n) = O(n^2 + n)
// n^2 is the dominant term and that stand alone n is the non-dominant term
// We can simplify O(n^2 + n) by dropping non-dominants => O(n^2)
function logItems(n) {
     for(let i = 0; i < n; i++) {
         for(let j = 0; j < n; j++) {
             console.log(i, j) 
         }       
     } 
 
     for(let k = 0; k < n; k++) {
         console.log(k)
     }
 }
 
 logItems(10)