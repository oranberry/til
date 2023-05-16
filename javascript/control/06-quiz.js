// Quiz
// if문을 switch문과 조건부 연산자로 바꿔보기
let cond = true;
let value = '';

if (cond) {
    value = '참';
} else {
    value = '거짓';
}
console.log(value);

// switch
switch (cond) {
    case true:
        value = '참';
        break;
    case false:
        value = '거짓';
        break;
}
console.log(value);

// ternary
value = cond ? '참' : '거짓';
console.log(value);