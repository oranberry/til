// 동등 비교 관계 연산자 (Equality operators)
// == 값이 같음
// != 값이 다름
// === 값과 타임이 둘다 같음 ⭐️
// !== 값과 타입이 다름 ⭐️

console.log(2 == 2); // true
console.log(2 != 2); // false
console.log(2 != 3); // true
console.log(2 == 3); // false

console.log(2 == '2'); // true
console.log(2 === '2'); // false

console.log(true == 1); // true
console.log(true === 1); // false
console.log(false == 0); // true
console.log(false === 0); // false

console.clear();

const obj1 = {
    name: 'js',
};
const obj2 = {
    name: 'js',
};

console.log(obj1 == obj2); // false
// obj1과 obj2 변수에는 메모리 주소가 저장되고 각 변수는 다른 메모리에 저장됨.
// 들어있는 key와 value는 동일하지만, 다른 메모리 주소를 가지고 있어 false가 나옴
console.log(obj1 === obj2); // false

console.log(obj1.name == obj2.name); // true
console.log(obj1.name === obj2.name); // true

let obj3 = obj2;
console.log(obj3 == obj2); // true
console.log(obj3 === obj2); // true
// obj3과 obj2는 동일한 메모리 주소를 가지고 있기 때문에 전부 true