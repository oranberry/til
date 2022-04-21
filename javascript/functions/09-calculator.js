const calculator = {
    plus: function(a , b){
        return a + b;
    },
    minus: function(a, b){
        return a - b;
    },
    divide: function(a, b){
        return a / b;
    },
    multiple: function(a, b){
        return a * b;
    },
    power: function(a, b){
        return a ** b;
    },
};

const plusResult = calculator.plus(10, 20);
const minusResult = calculator.minus(plusResult, 10);
const divideResult = calculator.divide(10, minusResult);
const multipleResult = calculator.multiple(plusResult, divideResult);
const powerResult = calculator.power(multipleResult, divideResult);

console.log(plusResult);
console.log(minusResult);
console.log(divideResult);
console.log(multipleResult);
console.log(powerResult);


