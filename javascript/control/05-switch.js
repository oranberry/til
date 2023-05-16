// 조건문 Conditional Statement - switch
// 정해진 범위안의 값에 대해 특정한 일을 해야 하는 경우 사용한다.
// switch문에는 조건식 두 개가 사용되는 데, 
// switch 옆 소괄호 조건식의 값이 case의 비교 조건식 값과 일치(===)하면 해당 실행문이 실행된다. 
// 보통 조건식에 변수를 넣고, 비교 조건식에는 변수와 비교할 값을 넣는다. 

// switch 문은 일치하는 case를 발견하면 일치 여부와 상관없이 그 아래 case들의 실행문을 모두 실행한다.
// 따라서 원하는 결과만 얻으려면 수동으로 case에서 빠져나와야 하는 데, 이 때 break문을 사용한다.

let day = 6; // 0: 월요일, 1: 화요일 ... 6: 일요일
let dayName;

switch(day) {
    case 0:
        dayName = '월요일';
        break;
    case 1:
        dayName = '화요일';
        break;
    case 2:
        dayName = '수요일';
        break;
    case 3:
        dayName = '목요일';
        break;
    case 4:
        dayName = '금요일';
        break;
    case 5:
        dayName = '토요일';
        break;
    case 6:
        // if문과 다르게 중괄호가 없어도 실행문을 여러 개 둘 수 있다. 
        dayName = '일요일';
        console.log('Sunday');
        break;
    // default - 어떠한 case도 일치하지 않을 때 실행
    // default가 맨 마지막에 위치하는 경우 더 이상 실행될 것이 없기 때문에 break문을 붙이지 않아도 된다. 
    // default는 else문과 달리 어디에나 위치할 수 있다. - break문 필요
    default:
        console.log('해당하는 요일 없음!');
}
console.log(dayName); // 일요일


// okay, good -> 좋음!, bad -> 나쁨!
let condition = 'okay'; 
let text;
switch (condition) {
    case 'okay':
    case 'good':
        text = '좋음!';
        break;
    case 'bad':
        text = '나쁨!';
        break;
}
console.log(text); // 좋음!