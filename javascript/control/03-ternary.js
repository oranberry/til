// Ternary operator: 조건부 연산자 (삼항 연산자)
// 조건식 ? 참인경우 : 거짓인경우

// 예시 1
let condition = true;
let value = condition ? '참' : '거짓';
console.log(value); // 참

if(condition){
    value = '참';
} else {
    value = '거짓';
}
console.log(value); // 참


// 예시 2
let fruit = 'apple';
if (fruit === 'apple'){
    console.log('🍎');
} else {
    console.log('😍');
}

fruit === 'apple' ? console.log('🍎') : console.log('😍');

// emoji 변수 선언 후 삼항 조건 연산자의 결괏값을 할당한다. 
let emoji = fruit === 'apple' ? '🍎' : '😍';
console.log(emoji);


// 조건부 연산도 중첩해서 사용할 수 있다.
// 예시 1
let condition1 = true;
let condition2 = false;
value = condition1 ? (condition2 ? '둘 다 참' : 'condition1만 참') : 'condition1이 거짓';
console.log(value); // condition1만 참

// 예시 2
condition1 = false;
condition2 = true;
value = condition1 ? 'condition1만 참' : (condition2 ? 'condition2가 참' : '둘 다 거짓');
console.log(value); // condition2가 참