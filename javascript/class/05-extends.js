// 클래스 확장 (상속)

class Animal {
  constructor(color) {
    this.color = color;
  }
  eat() {
    console.log('밥 먹는 중');
  }
  sleep() {
    console.log('자는 중');
  }
}


class Tiger extends Animal {}

const tiger = new Tiger('노랑');
console.log(tiger);         // Tiger { color: '노랑' }
tiger.sleep();              // 자는 중
tiger.eat();                // 밥 먹는 중


class Dog extends Animal {
  // overriding constructor
  constructor(color, name) {
    super(color);
    this.name = name;
  }
  play() {
    console.log('노는 중');
  }
  // overridding a method
  eat() {
    super.eat();    // 부모 기능 유지
    console.log('다 먹고 뭐하지?');
  }
}

const dog = new Dog('핑크', '보리');

console.log(dog);         // Dog { color: '핑크', name: '보리' }
dog.eat();                // 밥 먹는 중\n 다 먹고 뭐하지?
dog.play();               // 노는 중
