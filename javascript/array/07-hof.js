// Higher Order Functions (HoF): 고차 함수
// 인자로 함수를 받거나 (콜백함수) 함수를 반환하는 함수를 고차함수라고 한다. 
// built-in in Array object

// ✨ forEach(): executes a provided function once for each array element
// 배열을 빙글 빙글 돌면서 원하는것(콜백함수)을 할때 forEach()
let array = ['a', 'b', 'c'];
array.forEach(element => console.log(element));
// 'a'
// 'b'
// 'c'

const fruits = ['🍌', '🍓', '🍇', '🍓'];
// 1️⃣
fruits.forEach(function (value) {
  console.log(value);
});
// 2️⃣
fruits.forEach((value) => console.log(value));
// 🍌
// 🍓
// 🍇
// 🍓


// 조건에 맞는(콜백함수) 아이템을 찾을때
// ✨ find(): returns the first element in the provided array that satisfies the provied testing function. 
// 제일 먼저 조건에 맞는 아이템을 반환
array = [5, 12, 8, 130, 44];
const found = array.find(element => element > 10);
console.log(found);   // 12

const item1 = { name: '🥛', price: 2 };
const item2 = { name: '🍪', price: 3 };
const item3 = { name: '🍙', price: 1 };
const products = [item1, item2, item3, item2];
let result = products.find((item) => item.name === '🍪');
console.log(result);  // { name: '🍪', price: 3 }

// ✨ findIndex(): returns the index of the first eleent in an array that satisfies the provided testing function.
// 제일 먼저 조건에 맞는 아이템의 인덱스를 반환
result = products.findIndex((item) => item.name === '🍪');
console.log(result);  // 1


// ✨ some(): tests whether at least one element in the array passes the test implemented by the provided function.
// 배열의 아이템들이 부분적으로 조건(콜백함수)에 맞는지 확인
result = products.some((item) => item.name === '🍪');
console.log(result);  // true

// ✨ every(): tests whether all elements in the array pass the test implemented by the provided function.
// 배열의 아이템들이 전부 조건(콜백함수)에 맞는지 확인
result = products.every((item) => item.name === '🍪');
console.log(result);  // false


// ✨ filter(): creates a shallow copy of a portion of a given array, 
// filtered down to just the elements from the given array that pass the test implemented by the provided funcion.
// 조건에 맞는 모든 아이템들을 새로운 배열로!
result = products.filter((item) => item.name === '🍪');
console.log(result);  // [ { name: '🍪', price: 3 }, { name: '🍪', price: 3 } ]

console.clear();


// ✨ map(): creates a new array populated with the results of calling a provided function 
// on every element in the calling array.
// Map 배열의 아이템들을 각각 다른 아이템으로 매핑할 수 있는, 변환해서 새로운 배열 생성!
const nums = [1, 2, 3, 4, 5];
result = nums.map((item) => item * 2);
console.log(result);    // [ 2, 4, 6, 8, 10 ]

result = nums.map((item) => {
  if (item % 2 === 0) {
    return item * 2;
  } else {
    return item;
  }
});
console.log(result);    // [ 1, 4, 3, 8, 5 ]


// ✨ flatmap(): returns a new array formed by applying a given callback function to each element of the array,
// and then flattening the result by one level. 
// 중첩된 배열을 쫘악 펴서 새로운 배열로!
result = nums.map((item) => [1, 2]);
console.log(result);    // [[ 1, 2 ], [ 1, 2 ], [ 1, 2 ], [ 1, 2 ], [ 1, 2 ]]

result = nums.flatMap((item) => [1, 2]);
console.log(result);    // [1, 2, 1, 2, 1, 2, 1, 2, 1, 2]

result = ['oran', 'berry'].flatMap((text) => text.split(''));
console.log(result);    // ['o', 'r', 'a', 'n', 'b', 'e', 'r', 'r', 'y']


// ✨ sort(): sorts the elements of an array in place and returns the reference to the same array, now sorted.
// 배열의 아이템들을 정렬
// 문자열 형태의 오름차순으로 요소를 정렬하고, 기존의 배열을 변경
const texts = ['hi', 'abc'];
texts.sort();
console.log(texts);     // [ 'abc', 'hi' ]

const numbers = [0, 5, 4, 2, 1, 10];
numbers.sort();
console.log(numbers);   // [ 0, 1, 10, 2, 4, 5 ]

// < 0 a가 앞으로 정렬, 오름차순
// > 0 b가 앞으로 정렬, 내림차순
numbers.sort((a, b) => a - b);
console.log(numbers);   // [ 0, 1, 2, 4, 5, 10 ]


// ✨ reduce(): executes a user-supplied "reducer" callback function on each element of the array
// in order, passing in the return value from the calculation on the preceding element.
// 배열의 요소들을 접어서 접어서 값을 하나로!
result = [1, 2, 3, 4, 5].reduce((sum, value) => (sum += value), 0);
console.log(result);    // 15