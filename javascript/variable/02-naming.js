// 변수 이름 짓기 (Naming Variables)
// 변수, 함수, 클래스 등의 이름과 같은 식별자는 네이밍 규칙을 준수해야 하고
// 저장된 값을 잘 나타낼 수 있는 의미있는 이름을 사용해야 한다.

/* 식별자(identifier) 네이밍 규칙
 * 라틴문자(0-9, a-z, A-Z), _(underscore), 달러 기호($) 사용가능
 * 특수문자 ❌ (_, $ 두 가지는 예외)
 * 공백 ❌
 * 식별자는 특수문자와 숫자를 제외한 문자, 언더스코어(_), 달러 기호($)로 시작
 * 숫자로 시작 ❌
 * 예약어(reserved word)는 식별자로 ❌
 * 예약어: continue, break, class, thins, const, for, do, if, else, ... 
 * 대소문자 구분함 firstname != firstName (case-sensitive)
 */

/* 네이밍 컨벤션(naming convention) 
 * 하나 이상의 영어 단어로 구성된 식별자로 만들 때 가독성 좋게 단어를 한눈에 구분하기 위한 규칙
 * 1. 카멜 케이스: camelCase
 * 2. 스네이크 케이스: snake_case
 * 3. 파스칼 케이스: PascalCase 
 * variable, function, method: camelCase ✅
 * 생성자 함수, class, component: PascalCase ✅
 * private function: an underscore (_) in front of a variable/function/method (camelCase)
 * constant: UPPERCASE, UPPER_SNAKE_CASE
 * file: lowercase.jpg
 */

// 나쁜예제 💩
let number = 20;

// 좋은예제 ✨
let myAge = 20;

// 나쁜예제 💩
// 여러 개의 변수를 1, 2, 3 숫자로 구분 ❌ -> 최대한 의미있게, 구체적인 이름으로 작성하기
let audio1;
let audio2;

// 좋은예제 ✨
let backgroundAudio;
let windAudio;

// 꿀팁! 🍯
let audioBackground;
let audioWind;