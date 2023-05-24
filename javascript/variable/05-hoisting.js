// JavaScript Hoisting
// all undeclared variables are global variables.
function codeHoist(){
    a = 10;             // didn't declare using let/var/const (global scope)
    let b = 50;         // let variable (block scope)
}
codeHoist();

console.log(a);        // 10
// console.log(b);     // ReferenceError : b is not defined


// Hoisting with var is somewhat different. 
// var code (global)
// ⚠️ JavaScript only hoists declarations, not initializations.
console.log(name);                  // undefined
var name = 'Mukul Latiyan';

// how interpreter sees the above code
let name;
console.log(name);                  // undefined
name = 'Mukul Latiyan';