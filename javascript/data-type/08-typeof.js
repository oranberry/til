// typeof: 데이터 타입을 확인을 위한 연산자(operator)
// 값을 타입 문자열로 반환한다. e.g. undefined, string, number, object, funtion, ...

let variable;
console.log(typeof variable); // undefined

variable = '';
console.log(typeof variable); // string

variable = 123;               // 할당된 값에 따라 타입이 결정됨! (dynamic, weakly typed programming language)
console.log(typeof variable); // number

variable = {};
console.log(typeof variable); // object

variable = function () {};
console.log(typeof variable); // function

variable = Symbol();
console.log(typeof variable); // symbol

console.log(typeof 123); // number
console.log(typeof '123');// string