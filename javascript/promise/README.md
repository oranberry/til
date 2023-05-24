# Asynchronous JavaScript

Asynchronous programming is a technique that enables your program to start a potentially long-running task and still be able to be responsive to other events while that task runs, rather than having to wait until that task has finished. Once that task has finished, your program is presented with the result.

Many functions provided by browsers, especially the most interesting ones, can potentially take a long time, and therefore, are asynchronous. For example:

- Making HTTP requests using fetch()
- Accessing a user’s camera or microphone using getUserMedia()
- Asking a user to select files using showOpenFilePicker()

So even though you may not have to implement your own asynchronous functions very often, you are very likely to need to use them correctly.

https://developer.mozilla.org/en-US/docs/Learn/JavaScript/Asynchronous/Introducing

<br>

## 🔸 Callbacks

A callback function is a function passed into another function as an argument, which is then invoked inside the outer function to complete some kind of routine or action.

https://developer.mozilla.org/en-US/docs/Glossary/Callback_function  
https://javascript.info/callbacks

### Callback Hell

The callback hell is when we try to write asynchronous JavaScript in a way where execution happens visually from top to bottom, creating a code that has a pyramid shape with many }) at the end.

http://callbackhell.com

<br>

## 🔸 Promises

Promises are a much better way to work with asynchronous code in JavaScript than the old and error-prone callback approach. They were introduced into JavaScript with ECMAScript 6. Using promises, we can manage extremely complex asynchronous code with rigorous error-handling setup, write code in a more or less synchronous style, and keep ourselves from running into the so-called callback hell.

https://www.codeguage.com/courses/advanced-js/promises-introduction  
https://www.codeguage.com/courses/advanced-js/promises-basics  
https://www.codeguage.com/courses/advanced-js/promises-chaining  
https://www.codeguage.com/courses/advanced-js/promises-error-handling

### Async/Await

async/await is a special syntax to work with promises in a more comfortable fashion. We use async keyword to declare a async function that return a Promise, and the await keyword makes a function wait for a Promise.

https://javascript.info/async-await  
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/async_function  
https://www.codeguage.com/courses/advanced-js/promises-chaining  
https://www.freecodecamp.org/news/javascript-async-await-tutorial-learn-callbacks-promises-async-await-by-making-icecream

<br>

## 🔸 setTimeout

The setTimeout runs a function after the specified period expires. Times are declared in milliseconds.

https://developer.mozilla.org/en-US/docs/Web/API/setTimeout  
https://www.w3schools.com/jsref/met_win_settimeout.asp

<br>

## 🔸 setInterval

The setInterval() method helps us to repeatedly execute a function after a fixed delay. It returns a unique interval ID which can later be used by the clearInterval() method, which stops further repeated execution of the function.

setInterval() is similar to setTimeout, with a difference. Instead of running the callback function once, it will run it forever, at the specific time interval you specify (in milliseconds):

https://javascript.info/settimeout-setinterval  
https://www.geeksforgeeks.org/what-is-setinterval-in-javascript/

<br>

## 🔸 Event Loop

The Event Loop is one of the most important aspects to understand about Node.js. Why is this so important? Because it explains how Node.js can be asynchronous and have non-blocking I/O, it explains the “killer feature” of Node.js, which made it this successful.

https://nodejs.org/en/docs/guides/event-loop-timers-and-nexttick#what-is-the-event-loop  
https://dev.to/lydiahallie/javascript-visualized-event-loop-3dif
