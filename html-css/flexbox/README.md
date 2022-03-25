![flexbox](https://user-images.githubusercontent.com/72768159/156286648-5bf3e419-bf43-45f7-b207-716c68893d2e.png)

mdn source: <https://developer.mozilla.org/en-US/docs/Learn/CSS/CSS_layout/Flexbox>

## flexbox

**Flexbox** is a one-dimensional layout method for arranging items in rows or columns.

1. To start with, select which elements are to be laid out as flexible boxes. To do this, we set **a special value of display on the parent element of the elements you want to affect.** Flexbox는 flex container(부모 요소)와 flex items(자식 요소)로 구성되며 flexbox를 사용하려면 parent element에 display: flex;를 적어준다. 자식 요소에는 아무 것도 적지 않는다.

   **display: flex;**

   This causes the parent element to become a flex container and its children to become flex items. We have our multiple column layout with equal-sized columns with all the same height. This is default values given to flex items (the children of the flex container).

2. When elements are laid out as flex items, they are laid out along two axes(the main axis, the cross axis)

   - **The main axis** is the axis running in the direction the flex items are laid out in. (default: horizontal)
   - **The cross axis** is the axis running perpendicular to the direction the flex items are laid out in. (default: verticle)

   - **justify-content** controls where the flex items sit on the main axis.  
     flex-start(default), flex-end, center, space-around(distributes evenly, a bit of space left at either end), space-between(doesn't leave any space at either end)
   - **align-items** controls where the flex items sit on the cross axis.
     stretch(default), center, flex-start, flex-end

3. when you have a fixed width or height in your layout, your flexbox children will overflow their container, breaking the layout.

   **flex-wrap: wrap;** (parent)

   - flex-wrap: wrap; 한 줄에 들어갈 수 있는 만큼 보여주고 나머지는 다음 줄로 넘김. Any overflow is moved down to the next line.
   - flex-wrap: nowrap; 크기를 줄여서라도 한 줄에만 표시.

   **flex: 200px;** (children)

   - it means each will be at least 200px wide.

4. Flexbox provides a property called **flex-direction** that specifies which direction the main axis runs. By default is set to **row**.
