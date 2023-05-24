// 산술 연산자 (Arithmetic operators)
// + 더하기
// - 빼기
// * 곱하기
// / 나누기
// % 나머지값
// ** 지수 (거듭제곱)

console.log(5 + 2);
console.log(5 - 2);
console.log(5 * 2);
console.log(5 / 2);             // 2.5
console.log(5 % 2);             // 1
console.log(5 ** 2);            // 25 (es7에서 추가됨)
console.log(Math.pow(5, 2));    // 25

// + 연산자 주의점!
let text = '두개' + '연결';
console.log(text);              // 두개연결

// ⭐️ 숫자와 문자열을 더하면 문자열로 변환됨
text = '1' + 1; 
console.log(text);              // 11 (문자열)