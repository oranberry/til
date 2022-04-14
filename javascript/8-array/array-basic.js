// 연관된 여러 개의 데이터 값을 따로 선언해서 사용하는 것은 매우 좋지 않음
const mon = "mon";
const tue = "tue";
const wed = "wed";
const thu = "thu";
const fri = "fri";
const sat = "sat";
const sun = "sun";
const daysOfWeek = mon + tue + wed + thu + fri + sat + sun;
console.log(daysOfWeek); /* montuewedthufrisatsun */

// 배열은 가장 기본적이고 필수적인 데이터 구조
// 하나의 변수 안에 여러 개의 데이터를 가질 수 있다.
const daysOfWeek_array = ["mon", "tue", "wed", "thu", "fri", "sat"];
console.log(daysOfWeek_array); /* [ 'mon', 'tue', 'wed', 'thu', 'fri', 'sat' ] */

// Get Item from Array
// variable 이름을 적고 대괄호 안에 우리가 얻고 싶은 항목의 번호(index)를 넣어준다.
// 컴퓨터는 0부터 세기 때문에 순서를 셀 때는 0, 1, 2, ... 이기 때문에 n번째 요소를 얻기 위해서는 n-1을 넣어줘야 한다.
console.log(daysOfWeek_array[4]);

// 값 변경도 가능
daysOfWeek_array[5] = "fri"; /* sat -> fri */

// Add one more day to the array
daysOfWeek_array.push("sun");
console.log(daysOfWeek_array); /* ['mon', 'tue', 'wed', 'thu', 'fri', 'fri', 'sun'] */