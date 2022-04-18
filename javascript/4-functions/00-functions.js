// 💫 function은 반복해서 사용할 수 있는 코드 조각
function sayHello(){
	console.log("Hello!");
}
// 함수는 호출하지 않으면 실행되지 않음
sayHello(); // Hello!
sayHello(); // Hello!


// 데이터(정보)를 function에 보내는 방법
// Argument란 함수를 실행하는 동안 어떤 정보를 함수에게 보낼 수 있는 방법이다.
// Function의 괄호 안의 매개변수에서 argument를 받을 수 있다.
// 매개변수는 함수 안에서만 사용 가능!
function sayHello2(nameOfPerson, age){
    console.log("Hello, my name is " + nameOfPerson + " and I'm " + age + " years old.");
    // console.log(`Hello, my name is ${nameOfPerson} and I'm ${age} years old.`);
}
sayHello2("nico", 10);
sayHello2("dal", 23);
sayHello2("lynn", 22);


// object안에서 function을 사용하는 경우
const player = {
    name: "nico",
    sayHello: function(otherPersonsName){
        console.log(`Hello ${otherPersonsName}! Nice to meet you!`);
    },
};

console.log(player.name); // nico
console.log(player.sayHello("nico")); 
// Hello nico! Nice to meet you!
// undefined (실제값)
console.log(player.sayHello("lynn"));
// Hello nico! Nice to meet you!
// undefined (실제값)

// Why does console.log() return undefined?
// The result of evaluating console.log() is undefined 
// since console.log does not explicitly return something. 
// consolo.log는 콘솔에 출력하기 위한 것이고 
// 값을 함수 밖으로 보내기 위해서는 return이 꼭 필요하다!


// potato 매개변수는 오직 minusFive function 안에서만 사용 가능하다.
// 매개변수가 1개(potato)이기 때문에 제일 앞의 argument만 읽을 수 있다 (오류x) 
function minusFive(potato) {
	console.log(potato - 5);
}
minusFive(10, 12, 15, 26, 37, 80); // 5
