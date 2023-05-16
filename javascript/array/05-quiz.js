// Quiz
// 다음 배열에서 '라'를 모두 제거하기.
// indexOf와 splice 사용할 것
const arr = ['가', '나', '다', '라', '마', '라', '바', '라'];

let index = arr.indexOf('라');
while(index > -1){
    arr.splice(index, 1);
    index = arr.indexOf('라');
}
console.log(arr);

// for(let i = 0; i < arr.length; i++){
//     if(arr[i] === '라'){
//         arr.splice(i, 1);
//     }
// }
// console.log(arr);
