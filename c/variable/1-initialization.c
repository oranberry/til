// 변수란 컴퓨터에서 사용하는 데이터(정수 실수, 문자 등)를 저장할 수 있는 공간을 의미
// 변수를 선언하면 해당 변수가 주기억장치(메모리)에 만들어진다.

// 💫 Variable Initialization
// A variable that doesn’t have a default value
// Attempting to access the value of an uninitialized variable may yield an unpredictable result

// The initial value of a variable may be included in its declaration:
int height = 8;

// Any number of variables can be initialized in the same declaration:
int height = 8, length = 12, width = 10;

// 💥 주의 💥
// Each variable requires its own initializer.
int height, length, width = 10; // initializes only width!