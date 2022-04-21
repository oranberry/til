// 문자열타입
let string = '안녕하세요';
string = `안녕!`;
console.log(string); // 안녕!

// 특수 문자 출력하는 법
string = "'안녕!'";
console.log(string); // '안녕!'

string = '안녕!\n반가워!\t\t내 이름은\\\u09AC';
console.log(string);
// \\ - \ 출력
// \u - 해당 unicode character 출력

// 템플릿 리터럴 (Template Literal) ``
let id = '엘리';
let greetings = "'안녕!, " + id + "👋🏻\n좋은 하루 보내!'";
console.log(greetings);

greetings = `'안녕, ${id}👋🏻
좋은 하루 보내!'`;
console.log(greetings);