// const
// 값을 재할당 할 수 없어서 변수에 저장된 값을 변경할 수 없는 것을 상수(constant)라고 한다. 
// const 키워드를 사용해 선언한 변수는 재할당이 금지!
// 1. 상수
// 2. 상수변수 또는 변수

// 1. 상수
// 한번 값을 대입하면 다른 값을 대입할 수 없다는 특성 때문에 상수 선언 시 초기화(선언과 동시에 값을 대입하는 것) 해야 한다.
const text = 'hello';
const MAX_FRUITS = 5;
// MAX_FRUITS = 10; ❌ 


// 2. 재할당 불가능한 상수변수 또는 변수
// const는 객체 내부 값에는 적용되지 않는다. 따라서 엄밀한 의미에서 상수가 아니므로 보통 const도 변수라고 부르기도 한다. 
const apple = {
    name: 'apple',
    color: 'red',
    display: '🍎',
};

console.log(apple);         // { name: 'apple', color: 'red', display: '🍎' }

apple.name = 'orange';
apple.display = '🍏';
console.log(apple);          // { name: 'orange', color: 'red', display: '🍏' }