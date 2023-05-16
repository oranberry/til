// 객체 (object)
// 객체는 자료형의 일종으로 다양한 값을 모아 둔 또다른 값이다.
// 객체의 종류는 크게 배열(array), 함수(function), 배열이나 함수가 아닌 객체로 나눌 수 있다. 

// ⚡️ 배열과 함수가 객체인 이유
// 배열과 함수가 객체인 이유는 객체의 성질을 모두 다 사용할 수 있기 때문이다. 
// 배열과 함수에도 속성들을 추가하거나 수정 및 제거할 수도 있다.
// 객체는 함수와 배열을 포함하는 개념이라서 {}를 사용해 만든 객체를 객체 리터럴이라고 부른다.
// 다만, 함수와 배열은 주로 객체 리터럴과는 다른 목적으로 사용하기 때문에 임의 속성을 넣고자 한다면 객체 리터럴을 사용한다.

// 객체 리터럴 만드는 방법
// 1️⃣ Object literal { key: value }
// 2️⃣ new Object()
// 3️⃣ Object.create();

// key - 문자, 숫자, 문자열, 심볼
// value - 원시값, 객체(햠수)

let apple = {
    name: 'apple',
    'hello-bye': '👋🏻',          // 추천하진 않음. helloBye: '👋🏻',
    0: 1,
    ['hello-bye1']: '👋🏻',
};

// 속성, 데이터에 접근하기 위해서는
console.log(apple.name);        // apple.name 마침표 표기법 (dot notation)
console.log(apple['name']);     // 대괄호 표기법 (bracket notation)
console.log(apple['hello-bye']); 

// 속성 추가
apple.emoji = '🍎';
console.log(apple.emoji);       // 🍎
console.log(apple['emoji']);    // 🍎
console.log(apple);

// 속성 삭제
delete apple.emoji;
console.log(apple);