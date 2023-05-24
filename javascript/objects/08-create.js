// 생성자 함수
// const object = new Function();
// 함수 이름은 대문자로 시작
// 요즘은 생성자 함수를 잘 사용하지 않고 클래스를 많이 사용

// const apple = {
//     name: 'apple',
//     emoji: '🍎',
//     display: function() {
//         console.log(`${this.name}: ${this.emoji}`); // 객체 안에서 자신의 데이터를 접근할 때는 this.key
//     },
// };

// const orange = {
//     name: 'orange',
//     emoji: '🍊',
//     display: function() {
//         console.log(`${this.name}: ${this.emoji}`); // 객체 안에서 자신의 데이터를 접근할 때는 this.key
//     },
// };


// 생성자 함수
function Fruit(name, emoji) {
    this.name = name;
    this.emoji = emoji;
    this.display = () => {
        console.log(`${this.name}: ${this.emoji}`);
    };
    return this;    // 생략가능 (자동으로 생성됨))
}

const apple = new Fruit('apple', '🍎');
const orange = new Fruit('orange', '🍊');

console.log(apple);
console.log(orange);

console.log(apple.name);
console.log(apple.emoji);
apple.display();