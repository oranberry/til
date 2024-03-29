// Date
// UTC기준 (협정 세계시, 1970년 1월 1일 UTC 자정과의 시간 차이를 밀리초 단위로 표기)
console.log(new Date());                        // 현재 시간 
console.log(new Date('Jun 5, 2022'));           // 날짜 지정
console.log(new Date('2022-12-17T03:24:00'));   // 날짜와 시간 지정

// Static methods
console.log(Date.now());
console.log(Date.parse('2022-12-17T03:24:00'));

// Instance methods
const now = new Date();
now.setFullYear(2023);
now.setMonth(0);                    // 0: 1월
console.log(now.getFullYear());     // 2023
console.log(now.getDate());         // 0: 1일
console.log(now.getDay());          // 0: 일요일일부터, 1... 6: 토요일
console.log(now.getTime());
console.log(now);

console.log(now.toString());
console.log(now.toDateString());
console.log(now.toTimeString());
console.log(now.toISOString());             // ISO 8601 형식
console.log(now.toLocaleString('en-US'));   // 미국 형식
console.log(now.toLocaleString('ko-KR'));   // 한국 형식