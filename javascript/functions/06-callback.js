// 콜백함수 (Callback function)
// A callback function is a function passed into another function as an argument, 
// which is then invoked inside the outer function to complete some kind of routine or action.
const add = (a, b) => a + b;
const multiply = (a, b) => a * b;

// 전달된 action은 콜백함수이다.
// 전달될 당시에 함수를 바로 호출해서 반환된 값을 전달하는 것이 아니라 
// 함수를 가리키고 있는 함수의 레퍼런스(참조값)가 전달된다.
// 그래서 함수는 고차함수(calculator)안에서 필요한 순간에 호출이 나중에 됨
function calculator(a, b, action) {
  if (a < 0 || b < 0) {
    return;
  }
  let result = action(a, b);
  console.log(result);
  return result;
}

calculator(1, 1, add);        // 2
calculator(1, 2, multiply);   // 2
calculator(-1, -1, add);      // if문 때문에 영원히 호출되지 않는다. 


// 다른 예시 1
function greet(name, callback) {
  console.log('Hi' + ' ' + name);
  callback();
}
// callback function
function callMe() {
  console.log('I am callback function');
}

greet('Peter', callMe);


// 다른 예시 2
function greeting(name) {
  console.log(`Hello, ${name}`);
}

function processUserInput(callback) {
  const name = 'oranberry';
  callback(name);
}

processUserInput(greeting);