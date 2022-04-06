// 논리연산자 Logical operator
// && 그리고
// || 또는
// ! 부정 (단항연산자)
// !! 불리언값으로 변환 (단항연산자 응용)
let num = 8;
if (num >= 0 && num < 9) {
    console.log('👍🏻');
}
if (num != 9) {
    console.log('👋🏻');
}

console.log(true && true); // true
console.log(true && false); // false
console.log(false && true); // false
console.log(false && false); // false

console.log(true || true); // true
console.log(true || false); // true
console.log(false || true); // true
console.log(false || false); // true

console.log(!'text'); // false
console.log(!!'text'); // true