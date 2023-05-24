// Boolean - 래퍼 객체 (Wrapper Object)

const isTrue = new Boolean(true);   // Boolean 객체 타입
console.log(isTrue.valueOf());      // true

// boolean 원시 타입이 아닌 Boolean 객체 타입은 더 많은 메모리를 필요로 함.
// boolean 원시 타입을 사용하는 것이 더 좋다.
// const isTrue = true; ⭕️

// Falshy 값
// 0
// -0
// null
// NaN
// undefined
// ''


// Truthy 값
// 1
// -1
// '0'
// 'false'
// []
// {}