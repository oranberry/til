// Math
// Math works with the Number type. It doesn't work with BigInt.

// static properties
console.log(Math.E);            // 오일러의 상수, 자연로그의 밑
console.log(Math.PI);           // 원주율 PI값


// static method
// 절대값
// Math.abs(): Returns the absolute value of x
console.log(Math.abs(-10));         // 10

// 소수점 이하를 올림
// Math.ceil(): Returns the smallest integer greater than or equal to x.
console.log(Math.ceil(1.4));        // 2

// 소수점 이하를 내림
// Math.floor(): Returns the largest integer less than or equal to x.
console.log(Math.floor(1.4));       // 1

// 소수점 이하를 반올림
// Math.round(): Returns the value of the number x rounded to the nearest integer.
console.log(Math.round(1.4));       // 1  
console.log(Math.round(1.7));       // 2

// 정수만 반환
// Math.trunc(): Returns the integer portion of x, removing any fractional digits.
console.log(Math.trunc(1.5432));    // 1

// 최대, 최소값을 찾기
// Math.max(): Returns the largest of zero or more numbers.
// Math.min(): Returns the smallest of zero or more numbers.
console.log(Math.max(1, 3, 4));     // 4
console.log(Math.min(1, 3, 4));     // 1

// 거듭제곱
// Math.pow(): Returns base x to the exponent power y (x^y).
console.log(3 ** 2);                // 9
console.log(Math.pow(3, 2));        // 9

// 제곱근
// Math.sqrt(): Returns the positive square root of x.
console.log(Math.sqrt(9));          // 3

// ⭐️ 랜덤한 값을 반환
// Math.random(): Returns a pseudo-random number between 0 and 1.
console.log(Math.random());

// 1~10
console.log(Math.floor(Math.random() * 10 + 1));
