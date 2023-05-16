// 참조(reference)와 복사
const a = {name: 'oranberry'};
const b = a;

// 객체를 저장한 변수를 다른 변수에 대입하면 두 변수 모두 같은 객체를 저장하게 된다. 
// 이러한 상황일 때 변수 a와 b가 같은 객체를 참조하고 있다고 표현한다. 
// 또는, a와 b 그리고 객체 간에 참조 관계가 있다고 표현한다.
a.name = 'hero';
console.log(a.name);    // hero
console.log(b.name);    // hero


// 다만, 객체가 아닌 값(문자열, 숫자, 불 값, null, undefined)의 경우는 다르다.
// c를 바꿔도 d 변수는 영향을 받지 않는다. 객체가 아닌 값을 변수에 저장한 경우에는 참조 관계가 생기지 않기 떄문이다.
// 이렇게 참조가 생기지 않는 상황을 복사(copy)라고 한다. 
let c = 'oranbeery';
let d = c;
c = 'hero';

console.log(c);         // hero
console.log(d);         // oranberry