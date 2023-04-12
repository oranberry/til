## Space Complexity

Space Complexity is usually referred to as **the amount of memory** consumed by the algorithm. Let’s say that code 1 while it runs fast, comparatively, it takes up a lot of memory when it runs. And maybe code 2, even though that takes much longer to finish, maybe it takes up less memory. If preserving memory space is your most important priority and you don’t mind having some extra time complexity. Maybe code 2 is better for this case.  
<br>

Sometimes you'll hear the term auxiliary space complexity to refer to space required by the algorithm, not including space taken up by the inputs. Unless otherwise noted, when we talk about space complexity, technically we'll be talking about auxiliary space complexity.  
<br>

### Space Complexity (in JS)

- Most primitives (booleans, numbers, undefined, null) are constant space
- Strings require O(n) space (where n is the string length)
- Reference types are generally O(n), where n is the length (for arrays) or the number of keys (for objects)
