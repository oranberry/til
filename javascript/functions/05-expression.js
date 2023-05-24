// 함수의 선언문과 표현식
// 1️⃣ 함수 선언문: function name() { }

// 2️⃣ 함수 표현식: const name = function () { } - 무명함수, 함수도 객체이기 때문에 가능! 
// 표현식으로 작성하는 함수는 이름을 작성할 수는 있지만 외부에서 접근할 수 없기 때문에 이름을 생략하고 작성한다.
// 그래서 항상 변수에 할당한 이름으로 호출한다.
let add = function (a, b) {
  return a + b;
};
console.log(add(1, 2));

// 3️⃣ 화살표 함수 const name = () => { }
add = (a, b) => {
  return a + b;
};
console.log(add(1, 2));

// 값만 리턴하는 함수라면 { }와 return 생략 가능
add = (a, b) => a + b;
console.log(add(1, 2));


// *️⃣ 생성자 함수 const object = new Function();
// object안에서 function을 사용하는 경우
const player = {
  name: "oranberry",
  sayHello: function(otherPersonsName){
      console.log(`Hello ${otherPersonsName}! Nice to meet you!`);
  },
};

console.log(player.name); // oranberry
console.log(player.sayHello("nico")); 
// Hello nico! Nice to meet you!
// undefined (실제값)
console.log(player.sayHello("lynn"));
// Hello lynn! Nice to meet you!
// undefined (실제값)

// Why does console.log() return undefined?
// The result of evaluating console.log() is undefined 
// since console.log does not explicitly return something. 
// console.log는 콘솔에 출력하기 위한 것이기 떄문에 값을 함수 밖으로 보내기 위해서는 return이 꼭 필요하다!


// *️⃣ IIFE (Immediately-Invoked Function Expressions)
// 함수를 정의하면서 바로 호출하고 싶을 때 사용
// 함수를 ()로 묶으면 값으로 변환되고 함수의 값은 함수를 가리키고 있는 메모리 주소이므로 ()로 실행하여 바로 호출 가능하다.
(function run() {
  console.log('😍');
})();