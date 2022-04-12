// 불리언(boolean) 타입
let 참 = true;
let 거짓 = false;
console.log(참);
console.log(거짓);

// 활용예시
let isFree = true;
let isActivated = false;
let isEnrolled = true;
console.log(isActivated);

// Falshy 거짓인 값 
// !! 연산자: 0 -> false   1 -> true
console.log(!!0);
console.log(!!-0);
console.log(!!''); // 비어있는 문자열
console.log(!!null);
console.log(!!undefined);
console.log(!!NaN);

// Truthy 참인 값
console.log(!!1);
console.log(!!-1);
console.log(!!'text'); // 비어있지 않은 문자열
console.log(!!{}); // 비어있는 object (비어있지만 object 자체가 존재하기 때문에 True로 간주됨)
console.log(!!Infinity);