// Class Inheritance
// Class inheritance is a way for one class to extend another class.
// So we can create new functionality on top of the existing.

class Animal {
    constructor(name) {
      this.speed = 0;
      this.name = name;
    }
    run(speed) {
      this.speed = speed;
      console.log(`${this.name} runs with speed ${this.speed}.`);
    }
    stop() {
      this.speed = 0;
      console.log(`${this.name} stands still.`);
    }
  }
  
let animal = new Animal("My animal");
console.log(animal.name);   // My animal
animal.run(20);             // My animal runs with speed 20.
animal.stop();              // My animal stands still.


class Rabbit extends Animal {
    // overridding constructor
    constructor(name, earLength){
        super(name)
        this.earLength = earLength;
    }
    hide() {
        console.log(`${this.name} hides!`);
    }
    // overriding a method
    stop() {
        // super.method() to call a parent method
        super.stop();
        this.hide();
    }
}

let rabbit = new Rabbit("White Rabbit", 10);

console.log(rabbit.name);       // White Rabbit
console.log(rabbit.earLength);  // 10
rabbit.run(5);                  // White Rabbit runs with speed 5.
rabbit.stop();                  // White Rabbit stands still.
                                // White Rabbit hides!