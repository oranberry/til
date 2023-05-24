// Operator Priority 
let a = 2;
let b = 3;
let result = a + b * 4;
console.log(result);            // a + (b * 4) = 14

result = a++ + b * 4;
console.log(result);            // 14

// ✨ 우선순위를 명확하게 코드상에서 ()로 명시해주는 것이 좋다. 
result = ((a + b) * 5) / 6;     // 5
console.log(result);


// ! 연산자의 우선순위가 < 연산자보다 높다.
result = !2 < 0;
console.log(result);            // false

result = !(2 < 0);
console.log(result);            // true


// Quiz
// 다음 연산의 결과가 true가 되게 만들어보기 (연산자만 추가 수정 가능)
console.log(5 + 4 * 3 === 27);      // false

console.log((5 + 4) * 3 === 27);    // true
console.log(5 + 4 * 3 !== 27);      // true
console.log(5 + 4 * 3 < 27);        // true
console.log(!(5 + 4 * 3 === 27));   // true