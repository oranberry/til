# Expressions and Operators

An expression is a valid unit of code that resolves to a value. There are two types of expressions: those that have side effects (such as assigning values) and those that purely evaluate.

The expression x = 7 is an example of the first type. This expression uses the = operator to assign the value seven to the variable x. The expression itself evaluates to 7.

The expression 3 + 4 is an example of the second type. This expression uses the + operator to add 3 and 4 together and produces a value, 7. However, if it’s not eventually part of a bigger construct (for example, a variable declaration like const z = 3 + 4), its result will be immediately discarded — this is usually a programmer mistake because the evaluation doesn’t produce any effects.

As the examples above also illustrate, all complex expressions are joined by operators, such as = and +.

<br>

## 🔸 Arithmetic Operators

The Arithmetic operators perform addition(+), subtraction(-), multiplication(\*), exponentiation(\*\*), division(/), remainder(modulus %), increment(++), and decrement(--) operations.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators#arithmetic_operators  
https://javascript.info/operators#maths  
https://www.w3schools.com/js/js_arithmetic.asp

<br>

## 🔸 Unary Operators

JavaScript Unary Operators are the special operators that consider a single operand and perform all the types of operations on that single operand. These operators include unary plus(+), unary minus(-), logical not(!), prefix/postfix increments(++), and prefix/postfix decrements(--).

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators#unary_operators  
https://www.educba.com/unary-operators-in-javascript

<br>

## 🔸 Assignment Operators

An assignment operator assigns a value to its left operand based on the value of its right operand. The simple assignment operator is equal (=), which assigns the value of its right operand to its left operand. That is, x = f() is an assignment expression that assigns the value of f() to x.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_Operators#assignment_operators  
https://javascript.info/operators#assignment

<br>

## 🔸 Relational(Comparison) Operators

Relational operators are the operators that compare values and return true or false. The operators include: >, <, >=, <=, ==, ===, != and !==

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_Operators#comparison_operators  
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators#relational_operators  
https://www.w3schools.com/js/js_comparisons.asp

<br>

### Equality Comparisons

Comparison operators are used in logical statements to determine equality or difference between variables or values. Comparison operators can be used in conditional statements to compare values and take action depending on the result.

In javascript, the == operator does the type conversion of the operands before comparison, whereas the === operator compares the values and the data types of the operands. The Object.is() method determines whether two values are the same value: Object.is(value1, value2).

Object.is() is not equivalent to the == operator. The == operator applies various coercions to both sides (if they are not the same type) before testing for equality (resulting in such behavior as "" == false being true), but Object.is() doesn’t coerce either value.

Object.is() is also not equivalent to the === operator. The only difference between Object.is() and === is in their treatment of signed zeros and NaN values. The === operator (and the == operator) treats the number values -0 and +0 as equal but treats NaN as not equal to each other.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators#equality_operators  
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Equality_comparisons_and_sameness#same-value_equality_using_object.is  
https://www.scaler.com/topics/javascript/difference-between-double-equals-and-triple-equals-in-javascript

<br>

## 🔸 Bitwise Operators

Bitwise operators treat arguments as 32-bits (zeros & ones) and work on the level of their binary representation. Ex. Decimal number 9 has a binary representation of 1001. Bitwise operators perform their operations on such binary representations, but they return standard JavaScript numerical values.

Bitwise operators in JavaScript are as follows: & (AND), | (OR), ^ (XOR), ~ (NOT), << (Left SHIFT), >> (Right SHIFT), >>> (Zero-Fill Right SHIFT)

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_Operators#bitwise_operators

<br>

## 🔸 Logical Operators

There are four logical operators in JavaScript: || (OR), && (AND), ! (NOT), ?? (Nullish Coalescing).

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators#binary_logical_operators

<br>

## 🔸 BigInt Operators

Most operators that can be used with the Number data type will also work with BigInt values (e.g. arithmetic, comparison, etc.). However, the unsigned right shift >>> operator is an exception and is not supported. Similarly, some operators may have slight differences in behaviour (for example, division with BigInt will round towards zero).

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_Operators#bigint_operators

<br>

## 🔸 String Operators

In addition to the comparison operators, which can be used on string values, the concatenation operator (+) concatenates two string values together, returning another string that is the union of the two operand strings.

The shorthand assignment operator += can also be used to concatenate strings.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_Operators#string_operators  
https://javascript.info/operators#string-concatenation-with-binary

<br>

## 🔸 Conditional(Ternary) Operators

Conditional operator also known as Ternary operator is the only JS operator that takes three operands. The operator can have one of two values based on a condition.

Syntax: condition ? val_for_true : val_for_false

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Expressions_and_Operators#conditional_operator  
https://www.w3schools.com/js/js_comparisons.asp

<br>

## 🔸 Comma Operators

The comma operator (,) evaluates each of its operands (from left to right) and returns the value of the last operand. This lets you create a compound expression in which multiple expressions are evaluated, with the compound expression’s final value being the value of the rightmost of its member expressions. This is commonly used to provide multiple parameters to a for loop.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Comma_Operator

<br>
<br>

# Operator Precedence 연산자 우선순위

연산자의 우선순위가 높을 수록 먼저 계산된다.

https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Operator_Precedence
