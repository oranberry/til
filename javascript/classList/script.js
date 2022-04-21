const target = document.querySelector("div.hello:first-child h1");

function handleTitleClick(){
	// 오류를 줄이기 위해 string을 변수에 저장하면 좋다. 변수는 오류시 알려줌.
	const clickedClass = "clicked";

    // method 1
	// if(target.className === clickedClass){
	// 	target.className = "";
	// } else {
	// 	target.className = clickedClass;
	// }

    // method 2
    // if(target.classList.contains(clickedClass)){
	// 	target.classList.remove(clickedClass);
	// } else {
	// 	target.classList.add(clickedClass);
	// }

    // method 3
    // 특정한 className만 변경하도록 만들기
	// toggle은 classList에 특정한 className이 있는 지 확인해서
	// 있으면 제거, 없으면 추가해줌
	target.classList.toggle("clicked");

}
target.addEventListener("click", handleTitleClick);