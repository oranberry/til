// 함수 선언문 function name() { }

// 함수 표현식 const name = function () { } - 무명함수, 함수도 객체이기 때문에 가능! 
// 표현식으로 작성하는 함수는 이름을 작성할 수는 있지만 외부에서 접근할 수 없기 때문에 이름을 생략하고 작성한다.
// 변수에 할당한 이름으로 호출한다.
let add = function (a, b) {
  return a + b;
};
console.log(add(1, 2));

// 화살표 함수 const name = () => { }
add = (a, b) => {
  return a + b;
};
console.log(add(1, 2));

// 값만 리턴하는 함수라면 { } return 생략 가능
add = (a, b) => a + b;
console.log(add(1, 2));

// 생성자 함수 const object = new Function(); // 뒤 객체편에서 다룸

// IIFE (Immediately-Invoked Function Expressions)
// 함수를 정의하면서 바로 호출하고 싶을 때 
(function run() {
  console.log('😍');
})();