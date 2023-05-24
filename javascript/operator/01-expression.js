// 문(statement)은 최소 실행 단위이고
// 표현식(expression)은 값으로 평가 될 수 있는 문이다.

let b;          // (선언)문
b = 2;          // (할당)문, (숫자 리터럴) 표현식

let a = b = 2;
console.log(a); // 2