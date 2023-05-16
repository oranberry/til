// array를 사용하면 좋지 않은 예 ❌
// ✅ 이 경우에 10, false 등이 무슨 의미인지 알려주지 않기 때문에 array가 적합하지 않음.
const player_array = ["nico", 10, false, "little bit"]; 

// objects이 없다면 한 그룹으로 모아서 인식하기 힘들다. 
const playerName = "nico";
const playerPoints = 10;
const playerHandsome = false;
const playerFat = "little bit";


// ✨ objects
// objects는 property를 가진 데이터를 저장해주며, 모든 값이 같은 의미를 가지는 array와는 다르다.
// object을 만드는 것은 array 만드는 것과 비슷하지만 대괄호 [] 대신 중괄호 {}를 쓴다. 
// 중괄호 안에는 property(특성)을 작성하고 각 특성은 = 를 사용하지 않고 : 를 사용한다 (중괄호 밖에서는 = ). 
// 한 개의 property를 작성하고 나서는 콤마(,)를 사용하는 데 property가 하나 더 올 수 있기 때문이다.
const player = {
	name: "nico",
	points: 10,
	handsome: false,
	fat: "little bit",
};
console.log(player);


// property를 불러오는 2가지 방법 (결과 같음)
console.log(player.name); 		// dot notation
console.log(player["name"]); 	// bracket notation


// update object property (속성 수정) 👌🏻
player.handsome = true;
console.log(player); 

player.points = player.points + 15;
console.log(player.points); 	// 25


// Add more properties to the object 👌🏻
player.lastName = "potato";
player.sexy = "soon";
console.log(player);


// 객체 속성 제거 👌🏻
delete player.fat;
console.log(player.fat); 		// undefined (제거 된 속성 값)


// 💥💥 주의할 점!💥💥
// const는 수정할 수 없지만 object 안에 무언가(property)는 바꿀 수 있다. 
// player라는 object은 constant라서 수정할 수 없지만 player.handsome 같이 안의 property는 업데이트 할 때 문제가 없다.
// object를 선언한 변수에는 값이 아니라 메모리 주소(reference)가 복사되기 때문에 가능! 

// 💥 function이 아닌 것에 ()를 사용하지 않는다. 즉, player.points(); 와 같이 사용하지 않는다. 


// Quiz
// 객체 안에 객체가 있을 때, 'oran' 값에 접근하는 방법은?
const user = {
	name: {
		first: 'berry',
		last: 'oran'
	},
	gender: 'w',
};
console.log(user.name.last);			// oran
console.log(user['name']['last']);		// oran