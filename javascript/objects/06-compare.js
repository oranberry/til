// 객체 간 비교하기 (비교 연산)

// 객체가 아닌 숫자, 문자열, 불 값, null, undefined는 모두 true를 반환
console.log({} === {});                 // false
console.log('str' === 'str');           // true
console.log(123 === 123);               // true
console.log(false === false);           // true
console.log(null === null);             // true
console.log(undefined === undefined);   // true

// 객체는 모양이 같아도 생성할 때마다 새로운 객체가 생성된다. 
// 따라서 같은 객체인지 비교하려면 기존 객체를 변수에 저장해 두어야 한다.
const a = { name: 'oranberry'};
const array = [1, 2, a];
console.log(a === array[2]);            // true