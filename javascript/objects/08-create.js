// 생성자 함수 - 함수 이름은 대문자로 시작
function Fruit(name, emoji) {
    this.name = name;
    this.emoji = emoji;
    this.display = () => {
        console.log(`${this.name}: ${this.emoji}`);
    };
    return this;    // 생략가능
}

const apple = new Fruit('apple', '🍎');
const orange = new Fruit('orange', '🍊');

console.log(apple);
console.log(orange);

console.log(apple.name);
console.log(apple.emoji);
apple.display();


// const apple = {
//     name: 'apple',
//     display: function() {
//         console.log(`${this.name}: 🍎`); // 객체 안에서 자신의 데이터를 접근할 때는 this.key
//     },
// };

// const orange = {
//     name: 'orange',
//     display: function() {
//         console.log(`${this.name}: 🍊`); // 객체 안에서 자신의 데이터를 접근할 때는 this.key
//     },
// };