// 반복문 Loop Statement - for
// for(변수선언문; 조건식; 증감식) { }
// 실행순서:
// 1. 변수선언문 (식과 변수 선언)
// 2. 조건식의 값이 참이면 { } 코드 블럭을 수행
// 3. 증강식을 수행 (종료식)
// 4. 조건식이 거짓이 될때까지 2번과 3번을 반복함

// for문의 시작, 조건식, 종료식은 생략할 수 있다.
// 단, 실제로 코드를 실행하면 조건문이 없어 반복문이 종료되지 않기 때문에 무한 반복되어 프로그램이나 브라우저가 멈춰버린다. 
// 무한루프 💩
// for(;;){ }

// 1부터 10까지 출력
for(let i = 0; i < 10; i++) {
    console.log(i + 1);
}


// 반복문 제어: continue, break
// break문으로 반복문 멈추기
for(let i = 0; i < 20; i++){
    if(i === 10){
        console.log('i가 드디어 10이 되었다!');
        break;
    }
    console.log(i);
}

// continue문으로 코드 실행 건너뛰기
for(let i = 0; i < 20; i++){
    if(i === 10){
        continue;
        console.log('i가 드디어 10이 되었다!'); // 실행안됨
        break; // 실행안됨
    }
    console.log(i);
}


// 중첩 반복문
// 00 부터 99까지 출력
for(let i = 0; i < 10; i++){
    for(let j = 0; j < 10; j++){
        console.log(i, j);
    }
}


// Quiz
// 결과에 짝수가 나오지 않게 구구단 출력하기
for(let i = 0; i < 10; i++){
    for(let j = 0; j < 10; j++){
        if(i % 2 === 0 || j % 2 === 0)
            continue;
        console.log(i, '*', j, '=', i * j);
    }
}