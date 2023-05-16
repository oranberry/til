// 메서드 (method)
// 속성 값으로 자바스크립트의 모든 값(문자열, 숫자, 불값, null, undefined, 함수, 배열, 다른 객체 등)을 넣을 수 있는 데,
// 객체의 속성 값으로 함수가 들어가면 이 속성을 특별히 메서드라고 한다. 
// console.log는 console 객체의 log 메서드이다.

const debug = {
    log: function(value) {
        console.log(value);
    },
};  
debug.log('Hello, method!');              // log는 debug 객체의 메서드


const apple = {
    name: 'apple',
    display: function() {
        console.log(`${this.name}: 🍎`);    // 객체 안에서 자신의 데이터를 접근할 때는 this.key
    },
};
apple.display();