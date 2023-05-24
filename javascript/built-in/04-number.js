// Number - 래퍼 객체 (Wrapper Object)
const num1 = 123;
console.log(typeof num1);         // number (원시타입)

// Number(): creates a new Number value (object, 인스턴스)
const num2 = new Number(123);
console.log(typeof num2);         // object


// ✨ Static Properties
// MAX_VALUE: The largest positive representable number
// MIN_VALUE: The smallest positive representable number
// MAX_SAFE_INTEGER: The maximum safe integer (2^53 - 1)
// MIN_SAFE_INTEGER: The minimum safe integer -(2^53 - 1)
console.log(Number.MAX_VALUE);          // 1.7976931348623157e+308
console.log(Number.MIN_VALUE);          // 5e-324
console.log(Number.MAX_SAFE_INTEGER);   // 9007199254740991
console.log(Number.MIN_SAFE_INTEGER);   // -9007199254740991

if (num1 < Number.MAX_VALUE) {
}


// EPSILON: The smallest interval between two representable numbers.
if (Number.EPSILON > 0 && Number.EPSILON < 1) {
  console.log(Number.EPSILON);          // 0과 1사이에서 나타낼 수 있는 가장 작은 숫자
}

// 자바스크립트에서 실수끼리 계산을 할 때는
// 10진수를 2진수로 변환해서 계산하기 때문에 정확하게 부동소수점까지 계산되지 않는다.
// 이런 작은 오차를 나타내는 것이 epsilon이라고 할 수 있다.
const num = 0.1 + 0.2 - 0.2;            // 0.1 ❌
console.log(num);                       // 0.10000000000000003

function isEqual(original, expected) {
  // return original === expected; 
  // isEqual(num, 0.1)): 작은 오차때문에 false가 나옴
  // 작은 차이를 감지하고 무시하고 싶다면 epsilon을 사용하면 된다.
  return Math.abs(original - expected) < Number.EPSILON;
}
console.log(isEqual(1, 1));             // true
console.log(isEqual(0.1, 0.1));         // true
console.log(isEqual(num, 0.1));         // true


// NAN: special Not a Number value
// NEGATIVE_INFINITY: Special value representing negative infinity.
// POSITIVE_INFINITY: Special value representing infinity.
console.log(Number.NaN);                // NaN
console.log(Number.NEGATIVE_INFINITY);  // -Infinity
console.log(Number.POSITIVE_INFINITY);  // Infinity

if(num1 === Number.NaN){
}


// ✨ Static Methods
// isFinite()
// isInteger()
// isNaN()
// isSafeInteger()
// parseFloat()
// parseInt()

if (Number.isNaN(num1)) {
}


// ✨ Instance Methods
// toExponential(): Returns a string representing the number in exponential notation.
// toFixed(): Returns a string representing the number in fixed-point notation.
// toLocaleString(): Returns a string with a language sensitive representation of this number.
// toPrecision(): Returns a string representing the number to a specified precision in fixed-point or exponential notation.
// toString(): Returns a string representing the specified object in the specified radix ("base").
// valueOf(): Returns the primitive value of the specified object.

// 지수표기법 (매우 크거나 작은 숫자를 표기할때 사용, 10의 n승으로 표기)
const num3 = 102;
console.log(num3.toExponential());            // 1.02e+2

// 반올림하여 문자열로 변환
const num4 = 1234.12;
console.log(num4.toFixed());                  // 1234 (문자열)
console.log(num4.toString());                 // 1234.12 (문자열)
console.log(num4.toLocaleString('ar-EG'));    // ١٬٢٣٤٫١٢

// 원하는 자릿수까지 유효하도록 반올림
console.log(num4.toPrecision(5));             // 1234.1
console.log(num4.toPrecision(4));             // 1234
console.log(num4.toPrecision(2));             // 1.2e+3 (전체 자릿수 표기가 안될때는 지수표기법)