// String 
// The String object is used to represent and manipulate a sequence of characters.
const text = 'Hello World!';                    // 원시타입
console.log(text);
console.log(text.length);                       // 12

// Create as objects using String() constructor 
const textObj = new String('Hello World!');     // 객체타입
console.log(textObj);

// Character access
// 1. string as an array-like object using numerical index
// 2. charAt()
console.log(text[0]);                   // H
console.log(text[1]);                   // e
console.log(text[2]);                   // l
console.log(text.charAt(0));            // H
console.log(text.charAt(1));            // e
console.log(text.charAt(2));            // l


console.log(text.indexOf('l'));         // 2
console.log(text.lastIndexOf('l'));     // 9

console.log(text.includes('tx'));       // false
console.log(text.includes('h'));        // false
console.log(text.includes('H'));        // true

console.log(text.startsWith('He'));     // true
console.log(text.endsWith('!'));        // true

console.log(text.toUpperCase());        // HELLO WORLD!
console.log(text.toLowerCase());        // hello world!

console.log(text.substring(0, 2));      // He
console.log(text.slice(2));             // llo World!
console.log(text.slice(-2));            // d!

const space = '            space       ';
console.log(space.trim());              // space

const longText = 'Get to the, point';
console.log(longText.split(' '));       // [ 'Get', 'to', 'the,', 'point' ]
console.log(longText.split(' ', 2));    // [ 'Get', 'to' ]
console.log(longText.split(', ', 2));   // [ 'Get to the', 'point' ]