// 2️⃣ 문자열(sting) 타입
// 프로그래밍에서 하나의 글자를 문자라고 하는 데, 문자들이 하나 이상 나열되어 있다고 해서 문자열이라고 한다. 
// 문자열은 작은 따옴표나 큰따옴표로 감싼다. 다만, 시작과 끝이 같은 종류의 따옴표여야 한다.

let string = '안녕하세요!';
console.log(string); // 안녕하세요!
string = "안녕!";
console.log(string); // 안녕!

// 따옴표 안에 문자가 하나도 없는 경우도 가능하다. 빈 문자열을 표시.
string = '';
console.log(typeof string); // string

// 빈 문자열은 내부에 띄어쓰기가 있는 문자열과는 다른 값이다. 
let string2 = ' ';
console.log(string == string2); // false (두 값은 서로 다르다)


// 문자열 안에서 따옴표 사용하기 (따옴표 자체가 문자열에 포함되어 있는 경우)
// 문자열을 다른 종류의 따옴표로 감싼다. 
string = "'안녕!'";
console.log(string); // '안녕!'
string = '"안녕!"';
console.log(string); // "안녕!"

// 문자열 내부의 따옴표에 별도의 처리(백슬래시(\))를 하는 방법도 있다. 
// \를 붙이면 그다음에 나오는 문자를 기존과는 다르게 처리하라고 엔진에게 알리는 역할을 하며
// 이렇게 문자가 다르게 해석되게 하는 행위를 이스케이핑(escaping)이라고 한다. 
string = '\'안녕!\'';
console.log(string); // '안녕!'

// 문자열 여러 줄로 나타내기
// \n - 줄바꿈
string = '안\n녕';
console.log(string);

string = '하나\n둘\n\n셋';
console.log(string);

// \\ - \ 출력
// \u - 해당 unicode character 출력
string = '안녕하세요!\n반갑습니다!\t\t\\\u0048\u004A';
console.log(string);


// 문자열을 표현하는 방법에는 큰따옴표와 작은따옴표 말고도 한 가지가 더 있다. ` `
// `` 백틱 (backtick/backquote)으로 감싸진 문자열을 템플릿 리터럴 (Template Literal)이라고 한다.
let id = ``; // 빈 문자열 ""
id = `oranberry`;
let greetings = "'안녕하세요! " + id + "님\n 좋은 하루 보내세요!'";
console.log(greetings);

// 줄바꿈할 때는 백틱 문자열이 편하다. \n문자를 사용하지 않아도 줄바꿈이 된다.
greetings = `'안녕하세요! ${id}님
 좋은 하루 보내세요!'`;
console.log(greetings);