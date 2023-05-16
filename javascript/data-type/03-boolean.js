// 3️⃣ 불리언(boolean) 타입
// 1과 0은 참(true)와 거짓(false)에 대응되며 자바스크립트에는 true와 false를 나타내는 불 값(boolean)이라는 자료형이 있다. 
let 참 = true;
console.log(참); // true

let 거짓 = false;
console.log(거짓); // false

// 활용예시
let isFree = true;
let isActivated = false;
let isEnrolled = true;
console.log(isActivated); // false
console.log(typeof isFree); // boolean
console.log(typeof(isEnrolled)); // boolean


// 비교 연산자 사용하기
// 참과 거짓은 논리식의 결괏값으로 주로 사용된다. 예를 들어, 숫자를 비교할 때 결괏값으로 불 값이 나온다.
console.log(5 > 3); // true
console.log(5 < 3); // false
console.log(5 >= 5); // true
console.log(5 <= 4); // false
console.log(5 == 5); // true
console.log(5 == 6); // false
console.log(5 != 5); // false
console.log(5 != 6); // true


// NaN끼리 비교하기
// NaN끼리 비교하면 false 값을 가진다.
// 다만, != 연산에서는 true를 출력한다. 
console.log(NaN >= NaN); // false
console.log(NaN == NaN); // false
console.log(NaN != NaN); // true


// 불 값끼리 비교하기
// true(1)는 false(0)보다 큰 값이다.
console.log(true > false); // true


// 문자열끼리 비교하기
// 기본으로 문자의 번호를 따라 문자의 번호가 클수록 값이 크다.
console.log('b' > 'a'); // true
console.log('a'.charCodeAt()); // a는 97
console.log('b'.charCodeAt()); // b는 98

// 첫 문자가 같은 경우 다음 문자를 비교한다.
console.log('ad' > 'ab'); // true

// 다음 문자가 존재하는 문자열이 값이 더 크다.
console.log('ab' > 'a'); // true


// 다른 자료형끼리 비교하기
// 다른 자료형이 모두 숫자로 형 변환된 후 비교한다. 
console.log('3' < 5); // true

// 문자열 abc를 숫자로 바꾸면 NaN이고 NaN 비교는 false 이므로 결괏값이 false가 된다.
console.log('abc' < 5); // false

// 불 값도 비교 연산을 할 떄는 숫자로 형 변환된다.
console.log('0' < true); // true (0 < 1)


// Falsy 거짓인 값 
// 형 변환 후 false가 되는 값들을 거짓인 값(falsy value)라고 한다. 
// !! 연산자: 0 -> false   1 -> true
console.log(!!0);
console.log(!!-0);
console.log(!!''); // 비어있는 문자열
console.log(!!false);
console.log(!!null);
console.log(!!undefined);
console.log(!!NaN);


// Truthy 참인 값
// 형 변환 후 true가 되는 값들을 참인 값(truthy value)라고 한다.
console.log(!!1);
console.log(!!-1);
console.log(!!'text'); // 비어있지 않은 문자열
console.log(!!{}); // 비어있는 object (비어있지만 object 자체가 존재하기 때문에 True로 간주됨)
console.log(!!Infinity);