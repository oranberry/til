// 1️⃣ 숫자 타입(number)
// 숫자는 따옴표로 감싸지 않고 그대로 적는다. 

let integer = 123; // 정수
console.log(integer); // 123

let negative = -123; // 음수
console.log(negative); // -123

let double = 1.23; // 소수(실수)
console.log(double); // 1.23

// 💥 따옴표로 감싼 숫자는 문자열이 되기 때문에 숫자가 아니다.
notInteger = '123';
console.log(typeof notInteger); // string


// 무한 값 알아보기
console.log(0 / 123); // 0
console.log(123 / 0); // Infinity

console.log(typeof Infinity); // number
console.log(Infinity - 100); // Infinity

console.log(123 / -0); // -Infinity
console.log(-2 / 0); // -Infinity

// 무한에서 무한을 뺴는 것은 성립하지 않는다. 
console.log(Infinity - Infinity); // NaN (Not a Number)

// 💥 NaN는 이름과는 다르게 값이 숫자라는 점 주의!
console.log(typeof NaN); // number

console.log(0 / 0); // NaN (Not a Number)
console.log(123 / 'text'); // NaN (Not a Number)


// 2진법, 8진법, 16진법
let binary = 0b1111011; // 0b - 2진수
console.log(binary); // 123

let octal = 0o173; // 0o - 8진수 
console.log(octal); // 123

let hex = 0x7b; // 0x - 16진수 
console.log(hex); // 123


// 지수표기법(expontial notation)
// 매우 큰 숫자나 소수점 아래 자릿수가 많을 때 숫자를 표현하는 방식
// e 뒤에 나오는 숫자만큼 10의 거듭제곱을 하면 원래 숫자가 된다.
let expontial = 5e4;
console.log(expontial); // 5 * 10000 = 50000

expontial = 5e+4;
console.log(expontial); // 5 * 10000 = 50000

expontial = 5e-3;
console.log(expontial); // 5 * (1/1000) = 0.005


// 문자열을 숫자로 바꾸기
// 자바스크립트는 하나의 자료형을 다른 자료형으로 바꾸는 함수를 제공한다. 
// e.g. parseInt는 문자열을 숫자로 바꿀 수 있다.
let strToInt = '5';
console.log(typeof strToInt); // string
console.log(typeof parseInt(strToInt)); // number

// parseInt는 문자열을 정수로만 바꾸기 때문에 정수가 아닌 값을 입력하면 정수 부분만 추출해 표시한다.
strToInt = '3.14';
console.log(parseInt(strToInt)); // 3

console.log(parseInt('abc')) // NaN

// parseInt로 다른 기수법 적용하기
// parseInt는 문자열을 숫자로 바꿀 때도 사용하지만, 다른 기수법을 적용하는 데도 사용한다. 
// 해석하려는 값 뒤에 적용하려는 기수법을 의미하는 숫자를 콤마로 구분해서 적어준다.
console.log(parseInt(111, 2)); // 111라는 숫자를 2진법으로 해석 = 7
console.log(parseInt(111, 7)); // 111라는 숫자를 7진법으로 해석 = 57


// 문자와 숫자 더하기
// 문자열과 다른 자료형을 더하면 다른 자료형이 문자열로 바뀐 후 문자열과 더해진다. 
// 이처럼 값의 자료형이 바뀌는 현상 또는 바꾸는 행위를 형 변환(type casting)이라고 한다. 
// 더하기를 할 때는 숫자보다 문자열 자료형이 우선시 된다!
let example = '문자열' + 0;
console.log(example); // 문자열0

example = '1' + 0;
console.log(example); // '10'

// - 연산자를 사용할 때는 다른 자료형이 먼저 숫자로 형 변환된 후 빼기를 하게 된다. 
// 문자열을 숫자로 바꾸면 NaN이고 여기서 0을 빼도 그대로 NaN
example = '문자열' - 0;
console.log(example); // NaN

// 문자열 9가 숫자 9로 형 변환되고 여기에서 5를 빼기 때문에 결괏값이 4가 나온다.
example = '9' - 5;
console.log(example); // 4


// BigInt
// A BigInt is a bigint primitive, created by appending n to the end of an integer literal,
// or by calling the BigInt() constructor (but without the new operator)
// and giving it an integer value or string value
// 2^53 -1 보다 큰 정수
let bigInt = 1234567890123456789012345678901234567890n;
console.log(bigInt);
console.log(typeof(bigInt)); // bigint

let hugeInteger = BigInt(1234567890123456789012345678901234567890);
console.log(hugeInteger);
console.log(typeof(hugeInteger)); // bigint

let hugeString = BigInt("1234567890123456789012345678901234567890"); 
console.log(hugeString);
console.log(typeof(hugeString)); // bigint


// 실수 계산시 주의할 점
// 컴퓨터는 2진수인 0과 1밖에 알지 못하기 때문에 실수를 표현하면 무한 반복되는 실수가 있어서 어쩔 수 없이 근삿값으로 저장한다. 
// 그래서 우리가 사용하는 10진법으로 계사난 결과와 차이가 발생하는 경우가 생기는 데, 이 것이 부동소수점 문제이다.
// 이 문제를 해결하기 위한 가장 간단한 방법으로 실수를 정수로 바꿔서 계산하고 마지막에 다시 실수로 바꾸는 방법을 사용한다.
console.log(0.3 - 0.1); // 0.19999999999999998
console.log((0.3 * 10 - 0.1 * 10)/10); // 0.2