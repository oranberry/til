# This Keyword

In JavaScript, the this keyword is a little different compared to other languages. It refers to an object, but it depends on how or where it is being invoked. It also has some differences between strict mode and non-strict mode.

- In an object method, this refers to the object
- Alone, this refers to the global object
- In a function, this refers to the global object
- In a function, in strict mode, this is undefined
- In an event, this refers to the element that received the event
- Methods like call(), apply(), and bind() can refer this to any object

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/this  
https://www.w3schools.com/js/js_this.asp

<br>

## 🔸 in a method

Methods are properties of an object which are functions. The value of this inside a method is equal to the calling object. In simple words, this value is the object “before dot”, the one used to call the method.

https://javascript.info/object-methods#this-in-methods

<br>

## 🔸 in a function

The keyword this when used in a function refers to the global object. Note: in a browser window the global object is the window object.

<br>

## 🔸 using it alone

The keyword this when used alone refers to the global object. Note: in a browser window the global object is the window object.

<br>

## 🔸 in event handlers

The keyword this when used in an event handler refers to the element that received the event.

<br>

## 🔸 in arrow functions

The keyword this when used in an arrow function refers to the parent object.

https://stackoverflow.com/questions/66518020/javascript-this-keyword-and-arrow-function

<br>

## 🔸 Function Borrowing

Function borrowing allows us to use the methods of one object on a different object without having to make a copy of that method and maintain it in two separate places. It is accomplished through the use of .call(), .apply(), or .bind(), all of which exist to explicitly set this on the method we are borrowing.

https://medium.com/@ensallee/function-borrowing-in-javascript-4bd671e9d7b4

<br>

## 🔸 Explicit Binding

Explicit binding is when you use the call or apply methods to explicitly set the value of this in a function. Explicit Binding can be applied using call(), apply(), and bind().

https://medium.com/swlh/javascript-this-ac28f8e0f65d  
https://medium.com/@msinha2801/explicit-binding-rule-for-this-keyword-in-js-712405b0a11
