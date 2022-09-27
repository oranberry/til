/**
 * 재귀 함수에서 호출 스택 사용
 * Consider the factorial of the number
 * @param {number} x Number
 * @returns {number} Result
 */
const fact = x => {
  if (x === 1) return 1;
  return x * fact(x - 1);
};

console.log(fact(5));
