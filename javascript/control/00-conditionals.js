// prompt() 함수는 오래된 방법이여서 최근에는 잘 쓰지 않는다. (CSS로 바꾸지 못함)
// 사용자가 값을 입력할 때까지 코드의 실행을 멈춘다.
// prompt() 함수의 값은 default가 string 이여서 숫자로 쓰고 싶을 때 type을 바꾸는 작업을 해주어야 한다.
// cancel 하면 null 값이 저장된다.

const age = prompt("How old are you?"); 
console.log(age);
console.log(typeof age); // string

// 💫 string을 number로 바꾸는 방법
// parseInt() - A string to convert into a number
// string이면 숫자와 크기 비교를 할 수 없어 값을 비교할 때는 number로 바꿔준다.
console.log(typeof "15", typeof parseInt("15")); // string number

// 만약에 숫자로 바꿀 수 없는 문자를 입력하고 parseInt()를 사용하면 NaN가 나온다.
console.log(parseInt("hello")); // NaN

// 여러 함수를 같이 쓸 경우 함수는 안쪽부터 실행된다. 
age = parseInt(prompt("How old are you?"));
console.log(isNaN(age));
// isNaN() - Returns a boolean value (true/false) that indicates 
// whether a value is the reserved value NaN (not a number)
// true - age가 NaN(Not a Number) 이다.
// false - age가 숫자라는 의미. NaN(Not a Number)가 아니다

// if(condition) { } else { }
// condition은 boolean으로 판별 가능해야 한다. 

if(isNaN(age) || age < 0) {
    console.log("Please write a real positive number");
} else if(age < 18) {
    console.log("You are too young.");
} else if(age >= 18 && age < 50) {
    console.log("You can drink");
} else if(age > 50 && age <= 80) {
    console.log("You should exercise");
} else if(age > 80) {
    console.log("You can do whatever you want.");
} else if(age === 100) { 
	console.log("wow you are wise");
}
// 80 이상이면 앞의 조건이 실행되기 때문에 100이여도 마지막 statement이 실행되지 않는다
// 마지막 statement을 실행하고 싶다면 age > 80 전에 위치하게 한다.