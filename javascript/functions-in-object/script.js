const calculator = {
    plus: function(a, b) {
        console.log("10 + 5 = " + (a + b));
    },
    minus: function(a, b) {
        console.log("10 - 5 = " + (a - b));
    },
    division: function(a, b) {
        console.log("10 / 5 = " + (a / b));
    },
    multi: function(a, b) {
        console.log("10 * 5 = " + (a * b));
    },
    powerOf: function(a, b) {
        console.log("10 to the power of 5 is " + (a ** b));
    },
};

calculator.plus(10, 5);
calculator.minus(10, 5);
calculator.division(10, 5);
calculator.multi(10, 5);
calculator.powerOf(10, 5);