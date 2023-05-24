# Function 함수

Functions exist so we can reuse code. They are blocks of code that execute whenever they are invoked. Each function is typically written to perform a particular task, like an addition function used to find the sum of two or more numbers. When numbers need to be added anywhere within your code, the addition function can be invoked as many times as necessary.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/function  
https://www.codeguage.com/courses/js/functions-basics

<br>

## 🔸 Function Parameters

The parameter is the name given to the variable declared inside the definition of a function. There are two special kinds of syntax: default and rest parameters.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Functions#function_parameters

### Default Params

Default function parameters allow named parameters to be initialized with default values if no value or undefined is passed.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Functions/Default_parameters

### Rest Params

The rest parameter syntax allows a function to accept an indefinite number of arguments as an array, providing a way to represent variadic functions in JavaScript.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Functions/rest_parameters

<br>

## 🔸 Arrow Functions

Arrow Function is a new way of creating functions with the ’=>’ operator with a shorter syntax.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Functions/Arrow_functions  
https://www.w3schools.com/js/js_arrow_function.asp

<br>

## 🔸 IIFEs

Immediately-Invoked Function Expression is a function that is executed immediately after it is created.

https://developer.mozilla.org/en-US/docs/Glossary/IIFE  
https://javascript.plainenglish.io/https-medium-com-javascript-in-plain-english-stop-feeling-iffy-about-using-an-iife-7b0292aba174

<br>

## 🔸 Arguments Object

The arguments object is an Array-like object accessible inside functions that contains the values of the arguments passed to that function, available within all non-arrow functions. You can refer to a function’s arguments inside that function by using its arguments object. It has entries for each argument the function was called with, with the first entry’s index at 0. But, in modern code, rest parameters should be preferred.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Functions/arguments

<br>

## 🔸 Scope & Function Stack

**Scope** is a space or environment in which a particular variable or function can be accessed or used. Accessibility of this variable or function depends on where it is defined. JavaScript has the following kinds of scopes:

- Global scope: The default scope for all code running in script mode.
- Function scope: The scope created with a function.
- Block scope: The scope created with a pair of curly braces (a block).
- Module scope: The scope for code running in module mode.

**The function stack(call stack)** is how the interpreter keeps track of its place in a script that calls multiple functions, like which function is currently executing and which functions within that function are being called.

https://developer.mozilla.org/en-US/docs/Glossary/Call_stack  
https://developer.mozilla.org/en-US/docs/Glossary/Scope

<br>

### Recursion

One of the most powerful and elegant concept of functions, recursion is when a function invokes itself. Such a function is called a recursive function. As recursion happens, the underlying code of the recursive function gets executed again and again until a terminating condition, called the base case, gets fulfilled. As you dive into the world of algorithms, you’ll come across recursion in many many instances.

https://developer.mozilla.org/en-US/docs/Glossary/Recursion  
https://javascript.info/recursion  
https://www.codeguage.com/courses/js/functions-recursions

### Lexical Scoping

Before one can make an intuition of closures in JavaScript, it’s important to first get the hang of the term ’lexical environment’. In simple words, the lexical environment for a function f simply refers to the environment enclosing that function’s definition in the source code.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Closures#lexical_scoping  
https://www.freecodecamp.org/news/javascript-lexical-scope-tutorial  
https://www.codeguage.com/courses/js/functions-closures#What_is_a_lexical_environment

### Closures

Function closures are one of the most powerful, yet most misunderstood, concepts of JavaScript that are actually really simple to understand. A closure refers to a function along with its lexical environment. It is essentially what allows us to return a function A, from another function B, that remembers the local variables defined in B, even after B exits. The idea of closures is employed in nearly every other JavaScript program, hence, it’s paramount for a JavaScript developer to know it really well.

https://www.codeguage.com/courses/js/functions-closures

<br>

## 🔸 Built-in Functions

- A JavaScript method is a property containing a function definition . In other words, when the data stored on an object is a function we call that a method.
- To differentiate between properties and methods, we can think of it this way: A property is what an object has, while a method is what an object does.
- Since JavaScript methods are actions that can be performed on objects, we first need to have objects to start with. There are several objects built into JavaScript which we can use.

https://dev.to/elpepebenitez/built-in-methods-in-javascript-4bll
