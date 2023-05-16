let a = 2;
let b = 3;
let result = ((a + b) * 4) / 5;
console.log(result);

result = a++ + b * 4;
console.log(result);


// ! 연산자의 우선순위가 < 연산자보다 높다.
result = !(2 < 0);
console.log(result); // true

result = !2 < 0;
console.log(result); // false


// Quiz
// 다음 연산의 결과가 true가 되게 만들어보기 (연산자만 추가 수정 가능)
console.log(5 + 4 * 3 === 27);

console.log((5 + 4) * 3 === 27);
console.log(5 + 4 * 3 !== 27);
console.log(5 + 4 * 3 < 27);
console.log(!(5 + 4 * 3 === 27));