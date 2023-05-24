// 래퍼 객체 (Wrapper Object)

// 원시값을 필요에 따라서 관련된 빌트인 객체로 변환한다.
const number = 123;
console.log(number);    // 123 (number - 원시타입)

// number 원시타입을 감싸고 있는 Number 객체로 감싸짐
console.log(number.toString());     // 123 (Number - 객체타입)
console.log(number);                // 123 (number - 원시타입)

const text = 'text';
console.log(text);                  // text (string - 원시타입)

// string 원시타입을 감싸고 있는 String 객체로 감싸짐
// String - 객체타입
text.length                        
text.trim();