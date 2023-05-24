// var
// var는 변수(variable)의 줄임말이다.
// 예전에 많이 사용했지만, const와 let을 사용해 변수를 선언하는 방식으로 옮겨 가고 있다.

var string;
console.log(string); // undefined

string = "Hello, world!";
console.log(string); // Hello, world!

// ✨ 기존에 선언했던 variable 변수를 다시 선언해도 에러가 발생하지 않는다. 
// ➡ 실수로 변수를 다시 선언하는 문제가 발생할 수 있다. 
var string = 'Hello, oranberry!';
console.log(string); // Hello, oranberry!

// ✨ 예약어나 다름없는 이름을 변수명으로 사용할 수 있다. 
// ➡ 이러한 이름을 변수명으로 쓰면 같은 코드를 보는 다른 개발자가 헷갈릴 수 있다.
var undefined = 'defined';
var Infinity = 0;
var let = 'const';
