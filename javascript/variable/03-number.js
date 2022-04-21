let integer = 123; //정수
let negative = -123; //음수
let double = 1.23; //실수

console.log(integer); // 123
console.log(negative); // -123
console.log(double); // 1.23

let binary = 0b1111011; // 2진수 0b
let octal = 0o173; // 8진수 0o
let hex = 0x7b; // 16진수 0x

console.log(binary); // 123
console.log(octal); // 123
console.log(hex); // 123

console.log(0 / 123); // 0
console.log(123 / 0); // Infinity
console.log(123 / -0); // -Infinity
console.log(123 / 'text'); // NaN(Not a Number)

// A BigInt is a bigint primitive, created by appending n to the end of an integer literal,
// or by calling the BigInt() constructor (but without the new operator)
// and giving it an integer value or string value
let bigInt = 1234567890123456789012345678901234567890n;
console.log(bigInt);
console.log(typeof(bigInt)); // bigint

let hugeInteger = BigInt(1234567890123456789012345678901234567890);
console.log(hugeInteger);
console.log(typeof(hugeInteger)); // bigint

let hugeString = BigInt("1234567890123456789012345678901234567890"); 
console.log(hugeString);
console.log(typeof(hugeString)); // bigint