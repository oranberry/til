function add(a, b){
    console.log(a);
    console.log(b);
    return a + b;
}
const sum = add;

console.log(sum(1, 2));
console.log(add(1, 2));

// 만약 인자를 전달하지 않는 다면? 오류 X
console.log(add()); // NaN
// 매개변수의 기본값은 무조건 undefined이므로
// a - undefined
// b - undefined
