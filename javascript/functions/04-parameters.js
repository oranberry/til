// 함수의 인자
// 매개변수(parameter)와 인수(argument) 사용하기
// 함수를 선언할 때 사용한 변수를 매개변수라고 하고, 함수를 호출할 때 넣은 값들을 인수라고 한다. 
// 매개변수는 함수 안에서만 사용 가능!
function a(parameter){
  console.log(parameter);
}
a('argument');        // argument


// 함수가 하나의 매개변수와 하나의 인수만을 가지는 것은 아니다. 
// 각각 여러 개를 가질 수 있고, 매개변수와 인수의 개수가 일치하지 않아도 된다.
// 매개변수의 기본값은 무조건 undefined으로, 매개변수에 대응하는 인수가 존재하지 않을 때 자동으로 undefined 값이 대입된다. 
// arguments로 호출 시 넣었던 인수 목록을 볼 수 있다. 화살표 함수 ❌ function으로 선언한 함수만 사용 가능 ⭕️
function b(w, x, y, z){
  console.log(w, x, y, z);    // A B C undefined
  console.log(arguments);     // [Arguments] { '0': 'A', '1': 'B', '2': 'C' }
}
b('A', 'B', 'C');     


// 매개변수의 정보는 함수 내부에서 접근이 가능한 arguments 객체에 저장된다.
// 매개변수 기본값을 설정 가능. Default Parameters Ex. a = 1, b = 1
// 기본값은 undefined 경우에만 사용하고 외부에서 값이 주어진 경우에는 외부 값을 쓴다. 
function add(a = 1, b = 1) {
  console.log(a);             // 1
  console.log(b);             // 1
  console.log(arguments);     // [Arguments] {}
  console.log(arguments[0]);  // undefined
  console.log(arguments[1]);  // undefined
  return a + b;
}
console.log(add());           // 2
// add(1, 2, 3)의 arguments는 { '0': 1, '1': 2, '2': 3}


// potato 매개변수는 오직 minusFive function 안에서만 사용 가능하다.
// 매개변수가 1개(potato)이기 때문에 제일 앞의 argument만 읽을 수 있다 (오류x) 
function minusFive(potato) {
	console.log(potato - 5);
}
minusFive(10, 12, 15, 26, 37, 80); // 5


// Rest 매개변수 (Rest Parameters)
// 얼마나 많은 인자가 전달될 지 모를 때 모든 인자를 배열로 받을 수 있다.
function sum1(...numbers) {
  console.log(numbers);       // [ 1, 2, 3, 4, 5, 6, 7, 8 ]
}
sum1(1, 2, 3, 4, 5, 6, 7, 8);

function sum2(a, b, ...numbers) {
  console.log(a);             // 1
  console.log(b);             // 2
  console.log(numbers);       // [ 3, 4, 5, 6, 7, 8 ]
}
sum2(1, 2, 3, 4, 5, 6, 7, 8);