// null, undefined
let variable;
console.log(variable); // undefined

variable = null;
console.log(variable); // null

let activeItem; // 아직 활성화된 아이템이 있는 지 없는 지 모르는 상태 (undefined)
activeItem = null; // 활성화된 아이템이 없는 상태

console.log(typeof 123); // number
console.log(typeof '123'); // string
console.log(typeof null); // object
console.log(typeof undefined); // undefined