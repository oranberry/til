mdn source: <https://developer.mozilla.org/en-US/docs/Web/CSS/Attribute_selectors>

## Attribute selectors

- tag[attr]  
  Represents elements with an attribute name of attr.

- tag[attr=value]  
  Represents elements with an attribute name of attr whose value is exactly value.

- tag[attr~=value]  
  Represents elements with an attribute name of attr whose value is a whitespace-separated list of words, one of which is exactly value.

- tag[attr^=value]  
  Represents elements with an attribute name of attr whose value is prefixed (preceded) by value.

- tag[attr$=value]  
  Represents elements with an attribute name of attr whose value is suffixed (followed) by value.

- tag[attr*=value]  
  Represents elements with an attribute name of attr whose value contains at least one occurrence of value within the string.
