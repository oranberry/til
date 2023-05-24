// 함수 (function)
// 함수는 반복해서 사용할 수 있는 코드 조각

// 함수를 만들 떄는 보통 function 예약어를 사용하거나 => (화살표) 기호를 사용한다.
// 1️⃣ 함수 선언문 (function declaration statement)
function a() {
    console.log("Hello, world");
    // 명시적으로 return문을 사용하지 않는다면 항상 함수 실행문 끝에 return undefined이 있음.
    // return undefined;
}

// 2️⃣ 함수 표현식 (function expression)
const b = function() {
    return 10;
};

// 3️⃣ 화살표 함수 (arrow function)
const c = () => {
    console.log('Hello,');
    return;
    // return은 함수의 실행을 중간에 멈추는 역할을 한다.
    console.log('oranberry'); // 출력 안됨
};

// 함수를 사용하는 행위를 호출한다(call)고 표현한다.
a();                    // Hello, world
a();                    // Hello, world
a();                    // Hello, world
console.log(b());       // 10
c();                    // Hello,


// 사용예제 1
function sayHello(){
	console.log("Hello!");
}
// 함수는 호출하지 않으면 실행되지 않음!
sayHello();     // Hello!
sayHello();     // Hello!


// 사용예제 2
function sum(a, b) {
    return a + b;
}

const result = sum(1, 2);
console.log(result);


// 사용예제 3
function fullName(firstName, lastName){
    return `${lastName} ${firstName} 👋🏻`;
}

let lastName = '이';
let firstName = '정현';
console.log(fullName(firstName, lastName));

let lastName2 = '박';
let firstName2 = '현승';
console.log(fullName(firstName2, lastName2));