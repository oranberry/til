// Data Structure - Array (배열)
// 연관된 여러 개의 데이터 값을 따로 선언해서 사용하는 것은 매우 좋지 않다.
// 안좋은 예시 💩
const mon = "mon";
const tue = "tue";
const wed = "wed";
const thu = "thu";
const fri = "fri";
const sat = "sat";
const sun = "sun";
const daysOfWeek = mon + tue + wed + thu + fri + sat + sun;
console.log(daysOfWeek);        // montuewedthufrisatsun

// 배열은 가장 기본적이고 필수적인 데이터 구조로, 하나의 변수 안에 여러 개의 데이터를 가질 수 있다.
const daysOfWeek_array = ["mon", "tue", "wed", "thu", "fri", "sat", "sun"];
console.log(daysOfWeek_array);  // [ 'mon', 'tue', 'wed', 'thu', 'fri', 'sat', 'sun']


// 여러 가지 배열 생성 방법
// 1️⃣ new Array(arrayLength)
let array = new Array(3);
console.log(array);             // [ <3 empty items> ]

// 2️⃣ new Array(elemen0, element1, element2, ..., elementN)
array = new Array(1, 2, 3);
console.log(array);             // [ 1, 2, 3 ]

// 3️⃣ Array.of(): creates a new Array instance from a variable number of arguments
// Array.of(element0, element1, element2, ..., elementN)
array = Array.of(1, 2, 3, 4, 5);
console.log(array);             // [ 1, 2, 3, 4, 5 ]

// 4️⃣ 대괄호 []
const anotherArray = [1, 2, 3, 4];
console.log(anotherArray);      // [ 1, 2, 3, 4 ]

// 5️⃣ Array.from(): creates a new, shallow-copied Array instance from an iterable or array-like object.
// Array.from(arrayLike)
array = Array.from(anotherArray);
console.log(array);                               // [ 1, 2, 3, 4 ]

console.log(Array.from('foo'));                   // [ 'f', 'o', 'o' ]
console.log(Array.from([1, 2, 3], x => x  + x));  // [ 2, 4, 6 ]

// 일반적으로 배열은 동일한 메모리 크기를 가지며, 연속적으로 이어져 있어야 한다.
// 하지만 자바스크립트에서의 배열은 연속적으로 이어져 있지 않고 오브젝트(객체)와 유사하다.
// 즉, 자바스크립트의 배열은 일반적인 배열의 동작을 흉내낸 특수한 객체이다.
// 이를 보완하기 위해서 타입이 정해져 있는 타입 배열이 있다. (Typed Collections: Int8Array, Float32Array, ...)
array = Array.from({
  0: '안',
  1: '녕',
  length: 2,
});
console.log(array); // [ '안', '녕' ]


// 배열 안에 있는 값의 자료형이 모두 같지 않아도 된다. 
// 배열 안에 다른 배열이나 변수를 넣을 수 있다.
const arrayOfArray = [[1, 2, 3], [4, 5]];   // 이차원 배열
console.log(arrayOfArray[0]);               // [1, 2, 3]
console.log(arrayOfArray.length);           // 2

const a = 10;
const b = 20;
const variableArray = [a, b, 30];
console.log(variableArray[1]);               // 20 (b의 값)

// 배열은 내부의 값이 중복되어도 되고, 아무 값 없이 만들 수도 있다. 
const everything = ['사과', 1, undefined, true, '', null];
console.log(everything.length);              // 6

const duplicated = ['a', 'a', 'a', 'a', 'a'];
console.log(duplicated.length);              // 5

const empty = []; 
console.log(empty.length);                   // 0
