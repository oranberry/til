// 반복문 Loop Statement - while
// while(조건) {}
// while문은 조건식이 참인 동안 반복해서 실행문을 실행한다. (조건이 false가 될때까지 코드를 반복 실행)

// 10번 출력
let i = 0;
while(i < 10){
    console.log('Hello, oranberry!');
    i++;
}

// 5부터 0까지 출력
let num = 5;
while(num >= 0){
    console.log(num);
    num--;
}


// 무한 반복문을 표현할 때는 보통 while문을 더 많이 사용한다.
// break문으로 반복문 멈추기
i = 0;
while(true){
    if(i === 5) break; // i가 5가 되면 반복문 종료
    i++;
}
console.log(i); // 5

// continue문으로 코드 실행 건너뛰기
i = 0;
while(i < 10){
    i++;
    if(i % 2 === 0){
        continue; // 짝수 건너뛰기
    }
    console.log(i); // 홀수만 출력
}


// while
let isActive = false;
i = 0;
// while의 조건문인 isActive가 false이기 때문에 실행되지 않음.
while(isActive){
    console.log('while 아직살아있다!');
    if(i === 10){
        break;
    }
    i++;
}

// do while
// do while은 먼저 실행된 뒤에 조건식을 확인하기 때문에 isActive가 false이더라도 한번 실행됨.
do {
    console.log('do-while 아직살아있다!');
} while(isActive)
