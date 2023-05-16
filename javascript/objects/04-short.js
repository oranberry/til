const x = 0;
const y = 0;
const coordinate = { x, y };
console.log(coordinate);                    // { x: 0, y: 0 }


function makeObj(name, age) {
    return {
        name,
        age,
    };
}
console.log(makeObj('oranberry', 20));      // { name: 'oranberry', age: 20 }
console.log(makeObj('hellorida', 24));      // { name: 'hellorida', age: 24 }