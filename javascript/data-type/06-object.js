// 객체 (object)
// 객체는 자료형의 일종으로 다양한 값을 모아 둔 또다른 값이다.
// 객체의 종류는 크게 배열(array), 함수(function), 배열이나 함수가 아닌 객체로 나눌 수 있다. 

// ⚡️ 배열과 함수가 객체인 이유
// 배열과 함수가 객체인 이유는 객체의 성질을 모두 다 사용할 수 있기 때문이다. 
// 배열과 함수에도 속성들을 추가하거나 수정 및 제거할 수도 있다.
// 객체는 함수와 배열을 포함하는 개념이라서 {}를 사용해 만든 객체를 객체 리터럴이라고 따로 부른다.
// 다만, 함수와 배열은 주로 객체 리터럴과는 다른 목적으로 사용하기 때문에 임의 속성을 넣고자 한다면 객체 리터럴을 사용한다.

// 1️⃣ 배열
// 배열을 만들려면 대괄호[]로 값들을 감싸고 값은 쉼표로 구분한다.
// 배열 내부의 값을 요소(element)라고 한다. 
const pear = '🍐';
const strawberry = '🍓';
const pineapple = '🍍';
const peach = '🍑';
const watermelon = '🍉';

const fruits = ['🍐', '🍓', '🍍', '🍑', '🍉'];
console.log(fruits); // [ '🍐', '🍓', '🍍', '🍑', '🍉' ]

// ⭐️ 변수를 const로 선언했는 데 수정 가능한 이유 ⭐️
// const에는 새로운 값을 대입(=)하지 못하지만,
// 객체(배열, 함수, 객체 리터럴)가 대입되면 객체 내부의 속성이나 배열의 요소는 수정할 수 있다.
// fruits = ['🍓', '🍑']; ❌ 불가능

fruits[5] = '🍎';
console.log(fruits); // [ '🍐', '🍓', '🍍', '🍑', '🍉', '🍎' ]

fruits.pop();
console.log(fruits); // [ '🍐', '🍓', '🍍', '🍑', '🍉' ]

fruits.shift();
console.log(fruits); // [ '🍓', '🍍', '🍑', '🍉' ]


// 2️⃣ 함수
// 프로그래밍에서 함수는 특정한 작업을 수행하는 코드를 의미한다.
// 함수를 만들 떄는 보통 function 예약어를 사용하거나 => (화살표) 기호를 사용한다. 
// 화살표 기호를 사용한 함수를 화살표 함수(arrow function)라고 한다. 

// 함수 선언문 (function declaration statement)
// 함수 선언문의 중괄호 뒤에는 세미콜론을 붙이지 않는다. 
function a() {} 

// 함수 표현식 (function expression)
const b = function() {};

// 화살표 함수
const c = () => {};


// 3️⃣ 배열이나 함수가 아닌 객체
// 객체는 여러 개의 변수를 하나의 변수로 묶을 때 사용한다. 
// {}를 사용해 객체를 표현하는 것을 "객체 리터럴"이라고 한다. 
// built-in objects
// prototypal inheritance
// object prototype
let name = 'apple';
let color = 'red';
let display = '🍎';
let orangeName = 'orange';

let apple = {
    name: 'apple',
    color: 'red',
    display: '🍎',
};
console.log(apple);         // { name: 'apple', color: 'red', display: '🍎' }
console.log(apple.name);    // apple
console.log(apple.color);   // red
console.log(apple.display); // 🍎


// 객체 내부에 사용되는 name, year, month, date, gender 같은 정보들을 속성(property)이라고 한다.
// 속성은 속성 이름과 속성 값으로 구분된다. 
const user = {
    name: 'oranberry',
    year: 2000,
    month: 4,
    date: 15,
    gender: 'W',
};
console.log(user);          // { name: 'oranberry', year: 2000, month: 4, date: 15, gender: 'W' }

// 속성에 접근하는 방법
// 1️⃣ 변수.속성
// 2️⃣ 변수['속성이름']
console.log(user.name);     // oranberry
console.log(user['name']);  // oranberry

console.log(user.year);     // 2000
console.log(user['year']);  // 2000