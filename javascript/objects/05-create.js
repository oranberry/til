// const apple = {
//     name: 'apple',
//     display: function() {
//         console.log(`${this.name}: π`); // κ°μ²΄ μμμ μμ μ λ°μ΄ν°λ₯Ό μ κ·Όν  λλ this.key
//     },
// };

// const orange = {
//     name: 'orange',
//     display: function() {
//         console.log(`${this.name}: π`); // κ°μ²΄ μμμ μμ μ λ°μ΄ν°λ₯Ό μ κ·Όν  λλ this.key
//     },
// };

// μμ±μ ν¨μ - ν¨μ μ΄λ¦μ λλ¬Έμλ‘ μμ
function Fruit(name, emoji) {
    this.name = name;
    this.emoji = emoji;
    this.display = () => {
        console.log(`${this.name}: ${this.emoji}`);
    };
    return this; // μλ΅κ°λ₯
}

const apple = new Fruit('apple', 'π');
const orange = new Fruit('orange', 'π');

console.log(apple);
console.log(orange);
console.log(apple.name);
console.log(apple.emoji);
apple.display();

