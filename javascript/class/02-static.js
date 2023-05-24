// 재사용성을 높이는 방법
// ✨ static 정적 프로퍼티, 메서드
// class 안에서 static이라는 keyword를 property나 method 앞에 붙이면
// 만들어진 인스턴스에 포함되지 않고 클래스 안에만 남아있다. 

class Fruit {
  // 클래스 레벨의 프로퍼티
  static MAX_FRUITS = 4;
  // 생성자: new 키워드로 객체를 생성할때 호출되는 함수 (인스턴스 레벨의 프로퍼티)
  constructor(name, emoji) {
    this.name = name;
    this.emoji = emoji;
  }
  // 클래스 레벨의 메서드
  static makeRandomFruit() {
    // 클래스 레벨의 메서드에서는 this를 참조할 수 없음
    return new Fruit('banana', '🍌');
  }
  // 인스턴스 레벨의 메서드
  display = () => {
    console.log(`${this.name}: ${this.emoji}`);
  };
}

const banana = Fruit.makeRandomFruit();
console.log(banana);
console.log(Fruit.MAX_FRUITS);

// 인스턴스 레벨의 프로퍼티와 메서드는 꼭 생성된 인스턴스를 통해서 접근하고 호출해야 한다.
// console.log(Fruit.name); ❌
// Fruit.display(); ❌

// apple은 Fruit 클래스의 인스턴스이다.
const apple = new Fruit('apple', '🍎');
// orange은 Fruit 클래스의 인스턴스이다.
const orange = new Fruit('orange', '🍊');

console.log(apple);
console.log(orange);
console.log(apple.name);
console.log(apple.emoji);
apple.display();


// static 사용 예제 (built-in object)
Math.pow();
Number.isFinite(1);