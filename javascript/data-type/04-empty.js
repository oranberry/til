// 빈 값 사용하기
// null, undefined은 빈 값(비어 있음을 의미)을 표현한다는 공통점이 있지만, 차이점도 있다.

// 4️⃣ undefined 자료형
// 보통 반환할 결괏값이 없을 때 나온다. 
let variable;
console.log(variable); // undefined
console.log(typeof undefined); // undefined

// undefined는 불 값으로 형 변환하면 false
console.log(!!undefined); // false
console.log(undefined == false); // false
console.log(undefined == 0); // false
console.log(undefined == ''); // false


// 5️⃣ null 자료형
console.log(undefined == null); // true
console.log(undefined === null); // false

variable = null;
console.log(variable); // null
console.log(typeof null); // object ⚠️ (자바스크립트 버그)

// null도 불 값으로 형 변환하면 false
console.log(!!null); // false
console.log(null == false); // false
console.log(null == 0); // false
console.log(null == ''); // false

let activeItem; // 아직 활성화된 아이템이 있는 지 없는 지 모르는 상태 (undefined)
activeItem = null; // 활성화된 아이템이 없는 상태