# Data Types 자료형

Data type refers to the type of data that a JavaScript variable can hold. There are seven primitive data types in JavaScript (Number, BigInt, String, Boolean, Null, Undefined and Symbol). Objects are non-primitives.

자바스크립트의 모든 값은 데이터 타입을 갖는다. 자바스크립트(ES6)는 7개의 데이터 타입을 제공하고 이는 원시 타입(primitive type)과 객체 타입(object/reference type)으로 분류한다.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Data_structures  
https://www.w3schools.com/js/js_datatypes.asp  
https://javascript.info/types  
https://www.codeguage.com/courses/js/data-types

<br>

## 🔸 원시(primitive) 타입 - 단일 데이터

In JavaScript, a primitive (primitive value, primitive data type) is data that is not an object and has no methods or properties. There are 7 primitive data types: string, number, bigint, boolean, undefined, Symbol, null.

Most of the time, a primitive value is represented directly at the lowest level of the language implementation.

https://developer.mozilla.org/en-US/docs/Glossary/Primitive

<br>

## 🔸 객체(object/reference) 타입 - 복합데이터

JavaScript object is a data structure that allows us to have key-value pairs; so we can have distinct keys and each key is mapped to a value that can be of any JavaScript data type. JavaScript objects can have properties that define their characteristics.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Working_with_Objects  
https://javascript.info/object  
https://www.geeksforgeeks.org/objects-in-javascript  
https://www.w3schools.com/js/js_object_definition.asp

<br>

### Built-in Objects

Built-in objects, or “global objects”, are those built into the language specification itself. There are numerous built-in objects with the JavaScript language, all of which are accessible at the global scope.  
Some examples are: Number, Math, Date, String, Error, Function, Boolean

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects  
https://www.scaler.com/topics/javascript/javascript-built-in-objects  
https://www.tutorialride.com/javascript/javascript-built-in-objects.htm

### Object Prototype

JavaScript is an object-oriented language built around a prototype model. In JavaScript, every object inherits properties from its prototype, if there are any. A prototype is simply an object from which another object inherits properties. To create complex programs using JavaScript, one has to be proficient in working with prototypes — they form the very core of OOP in the language.

https://developer.mozilla.org/en-US/docs/Learn/JavaScript/Objects/Object_prototypes  
https://www.codeguage.com/courses/js/objects-prototypes  
https://javascript.info/prototypes

### Prototypal Inheritance

The Prototypal Inheritance is a feature in javascript used to add methods and properties in objects. It is a method by which an object can inherit the properties and methods of another object. Traditionally, in order to get and set the Prototype of an object, we use Object.getPrototypeOf and Object.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Inheritance_and_the_prototype_chain  
https://javascript.info/prototype-inheritance

<br>

## 🔸 TypeOf Operator

You can use the typeOf operator to find the data type of a JavaScript variable.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/typeof  
https://www.w3schools.com/js/tryit.asp?filename=tryjs_typeof_all

<br>

# Type Casting

Type conversion (or typecasting) means the transfer of data from one data type to another. Implicit conversion happens when the compiler (for compiled languages) or runtime (for script languages like JavaScript) automatically converts data types. The source code can also explicitly require a conversion to take place.

https://javascript.info/type-conversions  
https://www.geeksforgeeks.org/javascript-type-conversion  
https://www.w3schools.com/js/js_type_conversion.asp  
https://www.scaler.com/topics/javascript/type-conversion-in-javascript

<br>

## 🔸 Type Conversion vs Coercion

Type coercion is the automatic or implicit conversion of values from one data type to another (such as strings to numbers). Type conversion is similar to type coercion because they convert values from one data type to another with one key difference — type coercion is implicit. In contrast, type conversion can be either implicit or explicit.

https://developer.mozilla.org/en-US/docs/Glossary/Type_Conversion  
https://developer.mozilla.org/en-US/docs/Glossary/Type_coercion

<br>

## 🔸 Explicit Type Casting

Type casting means transferring data from one data type to another by explicitly specifying the type to convert the given data to. Explicit type casting is normally done to make data compatible with other variables. Examples of typecasting methods are parseInt(), parseFloat(), toString().

<br>

## 🔸 Implicit Type Casting

Implicit type conversion happens when the compiler or runtime automatically converts data types. JavaScript is loosely typed language and most of the time operators automatically convert a value to the right type.

https://dev.to/promisetochi/what-you-need-to-know-about-javascripts-implicit-coercion-e23
