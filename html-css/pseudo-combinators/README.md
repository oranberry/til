mdn source: <https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Selectors>

## Combinators

- **Descendant combinator**  
  The **space** combinator selects nodes that are descendants of the first element.  
  Syntax: A B  
  Ex: **div span** will match all **span** elements that are inside a **div** element.

- **Child combinator**  
  The **>** combinator selects nodes that are **direct children** of the first element.  
  Syntax: A > B  
  Ex: **ul > li** will match all **li** elements that are nested directly inside a **ul** element.

- **General sibling combinator**  
  The **~** combinator selects siblings.  
  Syntax: A ~ B  
  EX: **p ~ span** will match all **span** elements that follow a **p**, immediately or not.

- **Adjacent sibling combinator**  
  The **+** combinator matches the second element only if it **immediately** follows the first element.  
  Syntax: A + B  
  EX: **h2 + p** will match all p elements that immediately follow an h2 element.
