![flexbox](https://user-images.githubusercontent.com/72768159/156286648-5bf3e419-bf43-45f7-b207-716c68893d2e.png)


#### flexbox 사용규칙
<p>Flexbox is a one-dimensional layout method for arranging items in rows or columns.<br>
To start with, we need to select which elements are to be laid out as flexible boxes. To do this, we set a special value of <b>display</b> on the parent element of the elements you want to affect.</p>
<p>1. Flexbox는 flex container(부모 요소)와 flex items(자식 요소)로 구성되며 flexbox를 사용하려면 parent element에 display: flex;를 적어준다. 자식 요소에는 아무 것도 적지 않는다!<br>
2. flex container(부모 요소)는 main axis(default: horizontal)와 cross axis(default: verticle) 두 개의 축을 가지고 있다.<br>justify-content controls where the flex items sit on the main axis.<br>align-items controls where the flex items sit on the cross axis.<br>
3. flex-wrap: wrap; 한 줄에 들어갈 수 있는 만큼 보여주고 나머지는 다음 줄로 넘김.<br>flex-wrap: nowrap; 크기를 줄여서라도 한 줄에만 표시.</p>
