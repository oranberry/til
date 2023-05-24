// Quiz
// 주어진 숫자 만큼 0부터 순회하는 함수
// 순회하면서 주어진 특정한 일을 수행해야 함
// 순회하는 숫자를 다 출력하고 싶음
// 순회하는 숫자의 두배값을 다 출력하고 싶음
// function iterate(max, action)

function iterate(max, action) {
  for (let i = 0; i < max; i++) {
    action(i);
  }
}

// 1️⃣ 숫자 그대로 출력하는 함수
function log(num) {
  console.log(num);
}
iterate(3, log);

// 같은 표현
iterate(3, (num) => console.log(num));


// 2️⃣ 두배 곱해서 출력 
function doubleAndLog(num) {
  console.log(num * 2);
}
iterate(3, doubleAndLog);

// 같은 표현
iterate(3, (num) => console.log(num * 2));


// *️⃣ 실제 콜백 함수 사용예: setTimeout() method
setTimeout(() => {
  console.log('3초뒤 이 함수가 실행될거예요');
}, 3000);


// Callback Function Example
function greet(name, myFunction) {
  console.log('Hello world');
  // callback function
  // executed only after the greet() is executed
  myFunction(name);
}
// callback function
function sayName(name) {
  console.log('Hello' + ' ' + name);
}
// calling the function after 2 seconds
setTimeout(greet, 2000, 'John', sayName);