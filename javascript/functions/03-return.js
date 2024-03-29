// 함수에서 return을 명시적으로 하지 않으면 자동으로 undefined이 반환됨!
function add(a, b){
    // return a + b;
    return undefined;
}
const result = add(1, 2);
console.log(result);    // undefined


function print(text) {
    console.log(text);
}
print('text');  // text


// 한국 나이 계산
function calculateKrAge(birthYear) {
    return 2023 - birthYear + 1;
}
const krAge = calculateKrAge(1993);
console.log(krAge);


// return을 함수 중간에 하게 되면 함수가 종료됨
// 사용예: 조건이 맞지 않는 경우 함수 도입 부분에서 함수를 일찍 종료!
function print(num) {
    if(num < 0) {
        return;     // return undefined;
    }
    console.log(num);
}
print(12);  // 12
print(-12);