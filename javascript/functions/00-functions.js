// ๐ซ function์ ๋ฐ๋ณตํด์ ์ฌ์ฉํ  ์ ์๋ ์ฝ๋ ์กฐ๊ฐ
function sayHello(){
	console.log("Hello!");
}
// ํจ์๋ ํธ์ถํ์ง ์์ผ๋ฉด ์คํ๋์ง ์์
sayHello(); // Hello!
sayHello(); // Hello!


// ๋ฐ์ดํฐ(์ ๋ณด)๋ฅผ function์ ๋ณด๋ด๋ ๋ฐฉ๋ฒ
// Argument๋ ํจ์๋ฅผ ์คํํ๋ ๋์ ์ด๋ค ์ ๋ณด๋ฅผ ํจ์์๊ฒ ๋ณด๋ผ ์ ์๋ ๋ฐฉ๋ฒ์ด๋ค.
// Function์ ๊ดํธ ์์ ๋งค๊ฐ๋ณ์์์ argument๋ฅผ ๋ฐ์ ์ ์๋ค.
// ๋งค๊ฐ๋ณ์๋ ํจ์ ์์์๋ง ์ฌ์ฉ ๊ฐ๋ฅ!
function sayHello2(nameOfPerson, age){
    console.log("Hello, my name is " + nameOfPerson + " and I'm " + age + " years old.");
    // console.log(`Hello, my name is ${nameOfPerson} and I'm ${age} years old.`);
}
sayHello2("nico", 10);
sayHello2("dal", 23);
sayHello2("lynn", 22);


// object์์์ function์ ์ฌ์ฉํ๋ ๊ฒฝ์ฐ
const player = {
    name: "nico",
    sayHello: function(otherPersonsName){
        console.log(`Hello ${otherPersonsName}! Nice to meet you!`);
    },
};

console.log(player.name); // nico
console.log(player.sayHello("nico")); 
// Hello nico! Nice to meet you!
// undefined (์ค์ ๊ฐ)
console.log(player.sayHello("lynn"));
// Hello nico! Nice to meet you!
// undefined (์ค์ ๊ฐ)

// Why does console.log() return undefined?
// The result of evaluating console.log() is undefined 
// since console.log does not explicitly return something. 
// consolo.log๋ ์ฝ์์ ์ถ๋ ฅํ๊ธฐ ์ํ ๊ฒ์ด๊ณ  
// ๊ฐ์ ํจ์ ๋ฐ์ผ๋ก ๋ณด๋ด๊ธฐ ์ํด์๋ return์ด ๊ผญ ํ์ํ๋ค!


// potato ๋งค๊ฐ๋ณ์๋ ์ค์ง minusFive function ์์์๋ง ์ฌ์ฉ ๊ฐ๋ฅํ๋ค.
// ๋งค๊ฐ๋ณ์๊ฐ 1๊ฐ(potato)์ด๊ธฐ ๋๋ฌธ์ ์ ์ผ ์์ argument๋ง ์ฝ์ ์ ์๋ค (์ค๋ฅx) 
function minusFive(potato) {
	console.log(potato - 5);
}
minusFive(10, 12, 15, 26, 37, 80); // 5
