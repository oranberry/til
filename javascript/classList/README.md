### classList

JavaScript classList is a DOM property of JavaScript that allows for styling the CSS (Cascading Style Sheet) classes of an element. JavaScript classList is a read-only property that returns the names of the CSS classes. Although the classList property itself is read-only, you can modify its associated DOMTokenList using the add(), remove(), replace(), and toggle() methods.

- contains: returns a boolean value (true, false)  
  https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList/contains
- remove: removes the specified tokens from the list  
  https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList/remove
- add: adds the given tokens to the list, omitting any that are already present  
  https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList/add
- toggle: removes and existing token from the list and returns false. If the token doesn't exist it's added and the function returns true  
  https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList/toggle
