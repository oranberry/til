// 함수와 메모리
function add(a, b){
    console.log(a);
    console.log(b);
    return a + b;
}
// 함수 이름을 할당한 다는 것은 함수를 가리키고 있는 메모리 주소를 복사해서 할당하는 것과 같다.
const sum = add;

console.log(sum(1, 2));     // 3
console.log(add(1, 2));     // 3

// ⚠️ 만약 인자를 전달하지 않는 다면? 오류 X
console.log(add()); // NaN
// 매개변수의 기본값은 무조건 undefined이므로
// a - undefined
// b - undefined
