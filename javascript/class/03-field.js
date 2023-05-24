// field - class 안에 있는 property
// 접근 제어자를 사용하여 한번 만든 후에 외부에서는 변경이 불가능하게 만들 수 있음 (캡슐화)
// 캡슐화: 내부에서 필요한 데이터를 외부에서 보이지 않게 하는 것 (private)
// private(#), public(기본), protected

class Fruit {
  // constructor에서 주어지는 데이터는 생략 가능
  #name;
  #emoji;
  // 인스턴스를 만들 때 초기화가 되어야 한다면 생성자 밖에서 설정한다.
  #type = '과일';
  constructor(name, emoji) {
    this.#name = name;
    this.#emoji = emoji;
  }
  #display = () => {
    console.log(`${this.#name}: ${this.#emoji}`);
  };
}

const apple = new Fruit('apple', '🍎');
console.log(apple);

// apple.#name = '오렌지';  ❌ #field는 외부에서 접근이 불가능함
// apple.display(); ❌