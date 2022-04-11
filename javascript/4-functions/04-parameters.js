// 매개변수의 기본값은 무조건 undefined
// 매개변수의 정보는 함수 내부에서 접근이 가능한 arguments 객체에 저장됨
// 매개변수 기본값을 설정 가능. Default Parameters Ex. a = 1, b = 1
// 기본값은 undefined 경우에만 사용하고 외부에서 값이 주어진 경우에는 외부 값을 쓴다. 
function add(a = 1, b = 1) {
  console.log(a);
  console.log(b);
  console.log(arguments);
  console.log(argumetns[0]); // a
  console.log(arguments[1]); // b
  return a + b;
}
add();
// add(1, 2, 3)의 arguments는 { '0': 1, '1': 2, '2': 3}


// Rest 매개변수 Rest Parameters
// 얼마나 많은 인자가 전달될 지 모를 때 모든 인자를 배열로 받을 수 있다.
function sum(...numbers) {
  console.log(numbers); // [ 1, 2, 3, 4, 5, 6, 7, 8 ]
}
sum(1, 2, 3, 4, 5, 6, 7, 8);

function sum(a, b, ...numbers) {
  console.log(a); // 1
  console.log(b); // 2
  console.log(numbers); // [ 3, 4, 5, 6, 7, 8 ]
}
sum(1, 2, 3, 4, 5, 6, 7, 8);
