// 조건문 (Conditional Statement) - if
// 주어진 조건에 따라 코드를 실행하거나 실행하지 않는 문
// if(조건) { }
// if(조건) { } else { }
// if(조건1) { } else if(조건2) {} else if(조건3) {} ... else {}
let fruit = 'orange';

if (fruit === 'apple'){
    console.log('🍎');
} else if(fruit === 'orange'){
    console.log('🍊');
} else {
    console.log('🍑🍇🍉🍋');
}


// 실행문이 하나일 때는 중괄호를 사용하지 않아도 되지만, 하나일 떄도 중괄호를 사용하는 것이 좋다.
// 💥 중괄호가 없으면 바로 다음 문만 실행문에 포함된다.
if(false){
    console.log('실행문');  // 출력안됨
}
console.log('일반문');      // 일반문

// 좋지 않은 예시 ❌
// 이처럼 실행문이 하나일 때 중괄호를 사용하지 않으면 조건문의 범위를 한눈에 알아보기 어려우므로 
// 항상 실행문을 중괄호로 묶어 확실히 조건문의 일부임을 표시하는 것이 좋다.
if(false)
console.log('실행문');      // 출력안됨
console.log('일반문');      // 일반문


// false, '', 0, NaN, null, undefined은 거짓인 값을 가진다.
if(false) {
    console.log('출력안됨!');
}

if('') {
    console.log('출력안됨!');
}

if(0) {
    console.log('출력안됨!');
}

if(NaN) {
    console.log('출력안됨!');
}

if(null) {
    console.log('출력안됨!');
}

if(undefined) {
    console.log('출력안됨!');
}


// 중첩 if문 사용하기
let first = true;
let second = false;

if (first) {
    console.log('첫 번째 조건 충족');
    if(second){
        console.log('두 번째 조건 충족');
    } else {
        console.log('두 번째 조건 불충족');
    }
} else {
    console.log('첫 번째 조건 불충족');
}

// 💥 중첩 if문은 피하는 것이 좋다. 조건문이 중첩되어 들여쓰기가 깊어질수록 코드 읽기가 어려워진다.
// 중첩 if문은 논리적으로 if-else if-else문으로 변환할 수 있다. 가독성 ⬆
if(first && second) {   // first와 second 모두 true인 경우
    console.log('첫 번째 조건 충족');
    console.log('두 번째 조건 충족');
} else if(first) {      // first만 true인 경우
    console.log('첫 번째 조건 충족');
    console.log('두 번째 조건 불충족');
} else {                // first가 false인 경우
    console.log('첫 번째 조건 불충족');
}