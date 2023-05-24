// ✨ Global: The whole document

// ✨ Local - Function, Block scope
// 1️⃣ Function: When a variable is declared inside a function, 
// it is only accessible within that function and cannot be used outside that function.
// 2️⃣ Block: A variable when declared inside the if or switch conditions or inside for or while loops, 
// are accessible within that particular condition or loop. 
// To be consise the variables declared inside the curly braces are called as within block scope.

// var: function scope
// let & const: block scope

function hello()
{
    if(true){
        var a = 'JavaScript';
        let b = 'Python';
        const c = 'C';
        console.log(a);     // JavaScript
        console.log(b);     // Python
        console.log(c);     // C
    }
    console.log('Outside if statement');
    console.log(a);         // JavaScript
    console.log(b);         // ❌ ReferenceError
    console.log(c);         // ❌ ReferenceError 
}
hello();