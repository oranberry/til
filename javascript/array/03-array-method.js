// 배열의 함수들 
// 배열 자체를 변경하는지, 새로운 배열을 반환하는지! 
const fruits = ['🍌', '🍎', '🍋', '🍒', '🍉'];


// ✨ isArray(): 특정한 오브젝트가 배열인지 체크 
console.log(Array.isArray(fruits));   // true
console.log(Array.isArray({}));       // false


// 특정한 아이템의 위치(인덱스)를 찾을때
// ✨ indexOf(): 앞에서부터 주어진 값이 있는 지 찾는다.
// ✨ lastIndexOf(): 뒤에서부터 주어진 값이 있는 지 찾는다.
// 배열안에 중복된 요소가 있을 경우 indexOf()과 lastIndexOf()의 결괏값이 다를 수 있다.
// 배열 안에 존재하지 않는 값의 인덱스를 찾으면 결괏값은 -1
console.log(fruits.indexOf('🍎'));     // 1
console.log(fruits.lastIndexOf('🍉')); // 4 
console.log(fruits.indexOf('🍊'));     // -1


// ✨ includes(): 배열안에 특정한 아이템이 있는지 체크
console.log(fruits.includes('🍎'));   // true


// ✨ push(): 추가 (제일 뒤)
let length = fruits.push('🍑');       // 배열 자체를 수정(업데이트)
console.log(fruits);                  // [ '🍌', '🍎', '🍋', '🍒', '🍉', '🍑' ]
console.log(length);                  // 6

// ✨ unshift(): 추가 (제일 앞, 배열 맨 앞에 값 추가)
// 주어진 값이 배열의 첫 번째 요소로 추가되고, 다른 요소들의 인덱스는 하나씩 뒤로 밀린다. 
length = fruits.unshift('🍓');        // 배열 자체를 수정(업데이트)
console.log(fruits);                  // [ '🍓', '🍌', '🍎', '🍋', '🍒', '🍉', '🍑' ]
console.log(length);                  // 7


// ✨ pop(): 제거 (제일 뒤)
let lastItem = fruits.pop();          // 배열 자체를 수정(업데이트)
console.log(fruits);                  // [ '🍓', '🍌', '🍎', '🍋', '🍒', '🍉' ]
console.log(lastItem);                // 🍑

// ✨ shift(): 제거 (제일 앞)
lastItem = fruits.shift();            // 배열 자체를 수정(업데이트)
console.log(fruits);                  // [ '🍌', '🍎', '🍋', '🍒', '🍉' ]
console.log(lastItem);                // 🍓


// ✨ splice(): 중간에 추가 또는 삭제
// splice(시작 인덱스, 제거할 요소 개수)
const deleted = fruits.splice(1, 1);  // 배열 자체를 수정(업데이트)
console.log(fruits);                  // [ '🍌', '🍋', '🍒', '🍉' ]
console.log(deleted);                 // [ '🍎' ]
// splice(시작 인덱스): 해당 인덱스부터 끝까지 모든 요소를 제거한다.
fruits.splice(2);
console.log(fruits);                  //  ['🍌', '🍋' ]
// splice(시작 인덱스, 제거할 요소 개수, 바꿀 값)
// splice로 값을 제거한 자리에 다른 값을 넣을 수도 있다. 세 번째 자리부터 바꿀 값을 넣어준다.
fruits.splice(1, 1, '🍎', '🍓');      // 배열 자체를 수정(업데이트)
console.log(fruits);                 // [ '🍌', '🍎', '🍓' ]


// ✨ slice(): 잘라진 새로운 배열을 만듬
// slice(start, end): start 포함, end 불포함
let newArr = fruits.slice(0, 2);
console.log(newArr);                  // [ '🍌', '🍎' ]
console.log(fruits);                  // [ '🍌', '🍎', '🍓' ]
// slice(start): start 인덱스부터 끝까지 모든 요소 포함
newArr = fruits.slice(-2); 
console.log(newArr);                   // [ '🍎', '🍓' ]


// ✨ concat(): 여러개의 배열을 붙여줌
const arr1 = [1, 2, 3];
const arr2 = [4, 5, 6];
const arr3 = arr1.concat(arr2);
console.log(arr3);    // [ 1, 2, 3, 4, 5, 6 ]


// ✨ reverse(): 순서를 거꾸로
const arr4 = arr3.reverse();
console.log(arr4);    // [ 6, 5, 4, 3, 2, 1 ]
console.clear();


// ✨ flat(): 중첩 배열을 하나의 배열로 쫙 펴기
// creates a new array with all sub-array elements concatenated 
// into it recursively up to the specified depth.
// flat(depth)
let arr = [0, 1, 2, [3, 4]];
console.log(arr.flat());    // [ 0, 1, 2, 3, 4 ]

arr = [0, 1, 2, [[[3, 4]]]];
console.log(arr.flat(2));   // [0, 1, 2, [3, 4]]

arr = [[1, 2, 3], [4, [5, 6, [3, 4]]],];
arr = arr.flat(3);
console.log(arr);           // [1, 2, 3, 4, 5, 6, 3, 4]


// ✨ fill(): 특정한 값으로 배열을 채우기
// changes all elements in an array to a static value 
// from a start index (default 0) to an end index (default array.length)

// fill(value)
arr.fill(0);
console.log(arr);            // [0, 0, 0, 0, 0, 0, 0, 0]

// fill(value, start, end)
arr.fill('A', 1, 3);
console.log(arr);           // [0, 'A', 'A', 0, 0, 0, 0, 0]

// fill(value, start)
arr.fill('a', 4);
console.log(arr);           // [0, 'A', 'A', 0, 'a', 'a', 'a', 'a']


// ✨ join(): 배열을 문자열로 합하기
// creates and returns a new string by concatenating all of the elements in an array (or an array-like object)
// separated by commas or a specified separator string. 
let text = arr.join();
console.log(text);          // 0,A,A,0,a,a,a,a

text = arr.join(' | ');
console.log(text);          // 0 | A | A | 0 | a | a | a | a

text = arr.join(' ');       // 0 A A 0 a a a a
console.log(text);

const elements = ['Fire', 'Air', 'Water'];
console.log(elements.join());     // Fire,Air,Water
console.log(elements.join(''));   // FireAirWater
console.log(elements.join('-'));  // Fire-Air-Water