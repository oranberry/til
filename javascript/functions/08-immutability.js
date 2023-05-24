// 불변성 Immutability (unchangable)
// 함수 내부에서 외부로부터 주어진 인자의 값을 변경하는 것은 💩
// 상태변경이 필요한 경우에는, 새로운 상태를(오브젝트, 값) 만들어서 반환해야 한다 ✨
// 원시값 - 값에 의한 복사 (copy by value)
// 객체값 - 참조에 의한 복사 (메모리주소)

function display(num) {
  // num = 5; ❌
  console.log(num);
}
const value = 4;
display(value);       // 4
console.log(value);   // 4


// 다른 예시
function displayObj(obj) {
  // obj.name = 'Bob'; ❌ 외부로 부터 주어진 인자(오브젝트)를 내부에서 변경 하지 말 것!! ❌
  console.log(obj);
}
const user = { name: 'Oranberry' };
displayObj(user);     // 참조값 전달
console.log(user);

// 만약 상태 변경이 필요한 경우에는 이름부터 변경하는 느낌을 주도록 만들어야 한다!
function changeName(obj) {
  return { ...obj, name: 'Bob' }; // 반환할 때는 새로운 오브젝트 만들기!
}