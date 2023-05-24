# Variables 변수

A JavaScript application needs to work with information. To store and represent this information in the JavaScript codebase, we use **variables**. A variable is a container for a value.

https://developer.mozilla.org/en-US/docs/Learn/JavaScript/First_steps/Variables  
https://javascript.info/variables  
https://www.codeguage.com/courses/js/variables

<br>

## 🔸 Variable Declarations 변수 선언

To use variables in JavaScript, we first need to create it (declare a variable). To declare variables, we use one of the var, let, or const keywords.

- **var**: The var statement declares a function-scoped or globally-scoped variable, optionally initializing it to a value.  
  https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/var
- **let**: The let declaration declares a block-scoped local variable, optionally initializing it to a value.  
  https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/let
- **const**: Constants are block-scoped, much like variables declared using the let keyword. The value of a constant can’t be changed through reassignment (i.e. by using the assignment operator), and it can’t be redeclared (i.e. through a variable declaration). However, if a constant is an object or array its properties or items can be updated or removed.  
  https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/const

  | var                                                   | let                                      | const                                    |
  | ----------------------------------------------------- | ---------------------------------------- | ---------------------------------------- |
  | Can be redeclared                                     | Cannot be redeclared                     | Cannot be redeclared                     |
  | Can be reassigned a value                             | Can be reassigned a value                | Cannot reassign the value                |
  | Only have global and function scope                   | Can have a block scope                   | Can have a block scope                   |
  | Variables are hoisted on top and can be used anywhere | Variables must be initialized before use | Variables must be initialized before use |
  | Can be redeclared anywhere in the program             | Can be redeclared inside a block         | Can never be redeclared                  |

  https://www.geeksforgeeks.org/how-to-declare-variables-in-different-ways-in-javascript

<br>

## 🔸 Hoisting

Hoisting is a concept that enables us to extract values of variables and functions even before initializing/assigning value without getting errors and this happens during the 1st phase (memory creation phase) of the Execution Context. It refers to the process whereby the interpreter appears to move the declaration of functions, variables, or classes to the top of their scope, prior to execution of the code.  
Note: JavaScript allocates memory for all variables and functions defined in the program before execution. JavaScript only hoists declarations, not initializations.

- In JavaScript, Hoisting is the default behavior of moving all the declarations at the top of the scope before code execution. Basically, it gives us an advantage that no matter where functions and variables are declared, they are moved to the top of their scope regardless of whether their scope is global or local.
- It allows us to call functions before even writing them in our code.

#### 참고 자료

https://developer.mozilla.org/en-US/docs/Glossary/Hoisting  
https://www.geeksforgeeks.org/javascript-hoisting

<br>

## 🔸 Variable Naming Rules

A variable name should accurately identify your variable. When you create good variable names, your JavaScript code becomes easier to understand and easier to work with. Properly naming variables is really important. JavaScript also has some rules when it comes to naming variables.

- Names can only contain alphanumeric characters (a-z, A-Z, 0-9) and the \_ (underscore) and $ (dollar sign) characters
- Names can't begin with a digit.
- Names can't contain spaces.
- Names can't be reserved keywords.
- JavaScript variables are case sensitive.
- A JavaScript variable should be self-descriptive.
- JavaScript variable is declared with a camelCase variable name with a leading lowercase character.

#### 참고 자료

https://www.robinwieruch.de/javascript-naming-conventions  
https://www.codeguage.com/courses/js/variables#Tips_for_naming_variables

<br>

## 🔸 Variable Scopes

In JavaScript, scope refers to the visibility of a variable or how it can be used after it is declared. The scope of a variable depends on the keyword that was used to declare it.

The three types of Scope are Global Scope, Function Scope, and Block Scope. Before ES6 (2015), JavaScript had only Global Scope and Function Scope with the var keyword. ES6 introduced let and const which allow Block Scope in JavaScript.

- **Global Scope**: Variables declared Globally (outside any function) have Global Scope. Global variables can be accessed from anywhere in a JavaScript program. Variables declared with var, let and const are quite similar when declared outside a block.

- **Function Scope**: When a variable is declared inside a function, it is only accessible within that function and cannot be used outside that function.

- **Block Scope**: A block is any part of JavaScript code bounded by ’{}‘. Variables declared within a block can not be accessed outside that block. This Scope is only provided by the let and const keywords. If you declare a variable within a block using the var keyword, it will NOT have Block Scope.

#### 참고 자료

https://www.w3schools.com/js/js_scope.asp  
https://medium.com/nerd-for-tech/function-scope-block-scope-in-js-d29c8e7cd216  
https://www.geeksforgeeks.org/all-about-functions-and-scopes-in-javascript  
https://www.geeksforgeeks.org/javascript-es2015-block-scoping
