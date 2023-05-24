# 제어문 (Control Flow Statement)

In JavaScript, the Control flow is a way of how your computer runs code from top to bottom. It starts from the first line and ends at the last line unless it hits any statement that changes the control flow of the program such as loops, conditionals, etc.

We can control the flow of the program through any of these control structures: Sequential (default mode), Conditional Statements, Exception Handling, Loops and Iterations.

https://developer.mozilla.org/en-US/docs/Glossary/Control_flow

<br>

## 🔸 조건문(conditional statement): 특정한 조건일 때만 실행

When you write code, you often want to perform different actions for different decisions. You can use conditional statements in your code to do this. In JavaScript, we have three conditional statements: if, if...else, and switch.

- if...else: The if statement executes a statement if a specified condition is truthy. If the condition is falsy, another statement in the optional else clause will be executed.  
  https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Statements/if...else  
  https://javascript.info/ifelse

- switch: The switch statement evaluates an expression, matching the expression’s value against a series of case clauses, and executes statements after the first case clause with a matching value, until a break statement is encountered. The default clause of a switch statement will be jumped to if no case matches the expression’s value.  
  https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Statements/switch  
  https://javascript.info/switch  
  https://www.codeguage.com/courses/js/conditions-switch

- ternary operator: 삼항 조건 연산자  
  https://developer.mozilla.org/ko/docs/Web/JavaScript/Reference/Operators/Conditional_Operator

<br>

## 🔸 반복문(loop statement): 반복적으로 수행

Loops offer a quick and easy way to do something repeatedly.

You can think of a loop as a computerized version of the game where you tell someone to take X steps in one direction, then Y steps in another.

- for: The for loop is a standard control-flow construct in many programming languages, including JavaScript. It’s commonly used to iterate over given sequences or iterate a known number of times and execute a piece of code for each iteration.  
  https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/for  
  https://www.codeguage.com/courses/js/loops-for-loop  
  https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/for...in  
  https://javascript.info/object#forin  
  https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/for...of

- while: The while statement creates a loop that executes a specified statement as long as the test condition evaluates to true. The condition is evaluated before executing the statement.  
  https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/while  
  https://www.codeguage.com/courses/js/loops-while-loop

- do-while: The do...while statement creates a loop that executes a specified statement until the test condition evaluates to false. The condition is evaluated after executing the statement, resulting in the specified statement executing at least once.  
  https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/do...while  
  https://www.w3schools.com/jsref/jsref_dowhile.asp

<br>

### Labeled Statements

JavaScript label statements are used to prefix a label to an identifier. It can be used with break and continue statement to control the flow more precisely.

A label is simply an identifier followed by a colon(:) that is applied to a block of code.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/label

<br>

#### Break/Continue

- break statement, without a label reference, can only be used to jump out of a loop or a switch block.  
  https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/break

- continue statement, with or without a label reference, can only be used to skip one loop iteration.  
  https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/continue

<br>

## 🔸 Exception Handling

In JavaScript, all exceptions are simply objects. While the majority of exceptions are implementations of the global Error class, any old object can be thrown. With this in mind, there are two ways to throw an exception: directly via an Error object, and through a custom object. (excerpt from Rollbar)  
https://rollbar.com/guides/javascript/how-to-throw-exceptions-in-javascript

- throw statement: The throw statement throws a user-defined exception. Execution of the current function will stop (the statements after throw won’t be executed), and control will be passed to the first catch block in the call stack. If no catch block exists among caller functions, the program will terminate. (excerpt from MDN)

- try/catch/finally: These are ways of handling errors in your JavaScript code. Inside the try code block we have the code to run, inside the catch block we handle the errors, and inside the finally block we have code that runs after the execution of the previous code blocks, regardless of the result.  
  https://www.w3schools.com/js/js_errors.asp

- Utilizing Error Objects: When a runtime error occurs, a new Error object is created and thrown. With this Error object, we can determine the type of the Error and handle it according to its type.
  - Types of Errors: Besides error constructors, Javascript also has other core Error constructors.  
    e.g. AggregateError, EvalError, Internal Error, RangeError, ReferenceError, SyntaxError  
    https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Error  
    https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Control_flow_and_error_handling
