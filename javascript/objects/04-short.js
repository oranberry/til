// 객체 축약 버전
const x = 0;
const y = 0;

// 좌표 object
const coordinate = { x, y };                // { x: x, y: y } key 이름과 참조하는 변수의 이름이 동일한 경우 생략 가능
console.log(coordinate);                    // { x: 0, y: 0 }


// 다른 예시
function makeObj(name, age) {
    return {
        name,
        age,
    };
}
console.log(makeObj('oranberry', 20));      // { name: 'oranberry', age: 20 }
console.log(makeObj('hellorida', 24));      // { name: 'hellorida', age: 24 }