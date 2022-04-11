// 사용예제  1
function sum(a, b) {
    // const result = a + b;
    // return result;
    console.log('function');
    return a + b;
}
// 함수는 호출하지 않으면 실행되지 않음.
const result = sum(1, 2);
console.log(result);

// 사용예제 2
function fullName(firstName, lastName){
    return `${lastName} ${firstName} 👋🏻`;
}
let lastName = '김';
let firstName = '지수';
console.log(fullName(firstName, lastName));

let lastName2 = '박';
let firstName2 = '철수';
console.log(fullName(firstName2, lastName2));