// 변수(variable)
// 하나의 값을 저장하기 위해 확보한 메모리 공간 자체 또는 그 메모리 공간을 식별하기 위해 붙인 이름으로
// 변수는 값의 위치를 가리키는 상징적인 이름으로 하나의 값을 저장하기 위한 메커니즘

// 변수 선언(declaration) 및 할당(assignment)
let userId;
console.log(userId);    // undefined 값이 암묵적으로 할당되어 초기화 (initialization)

userId = 1;             // 재할당
console.log(userId);    // 1

let userName = 'Lee';
console.log(userName);  // Lee

userName = 'Park';      // 재할당
console.log(userName);  // Park

// ⚡️ 객체나 배열 같은 자료구조를 사용하면 여러 개의 값을 하나로 그룹화 해서 하나의 값처럼 사용 가능
let user = { id: 1, name: 'Lee'}
console.log(user);

let users = [{ id: 1, name: 'Lee'}, { id: 2, name: 'Park'}];
console.log(users);