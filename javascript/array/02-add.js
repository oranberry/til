const fruits = ['🍌', '🍎', '🍇', '🍑'];

// 배열 아이템을 참조하는 방법
console.log(fruits[0]);     // 🍌
console.log(fruits[1]);     // 🍎
console.log(fruits[2]);     // 🍇
console.log(fruits[3]);     // 🍑
console.log(fruits.length); // 4 (배열의 요소 개수)

// 💥 배열의 마지막 요소의 값 찾기
console.log(fruits[fruits.length - 1]); // 🍑

// 배열의 마지막에서 세 번째 요소 찾기
console.log(fruits[fruits.length - 3]); // 🍎

// 배열에 있는 모든 요소 출력하기
for (let i = 0; i < fruits.length; i++) {
  console.log(fruits[i]);
}


// 추가, 삭제 
// 원하는 배열의 인덱스에 값 대입 - 💩 좋지 않은 방식 ❌
fruits[fruits.length] = '🍒';
console.log(fruits);      // [ '🍌', '🍎', '🍇', '🍑', '🍒' ]

fruits[6] = '🍓';
console.log(fruits);      // [ '🍌', '🍎', '🍇', '🍑', '🍒', <1 empty item>, '🍓' ]

// 배열 맨 앞에 추가되는 것이 아니라 첫 번째 요소의 값이 변경됨.
fruits[0] = '🍊';
console.log(fruits);      // [ '🍊', '🍎', '🍇', '🍑', '🍒', <1 empty item>, '🍓' ]

delete fruits[1];
console.log(fruits);      // [ '🍊', <1 empty item>, '🍇', '🍑', '🍒', <1 empty item>, '🍓' ]