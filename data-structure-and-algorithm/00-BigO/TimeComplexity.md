## Time Complexity

Time Complexity is not measured in time. Because if you took the same code and ran it on a computer that runs twice as fast, it would complete twice as fast. It does not mean the code is better, but it just means the computer is better. So it is measured in **the number of operations** that it takes to complete something.  
<br>

## Best, Average, and Worst case analysis

Best, average, and worst case analysis is a methodology used to assess the time complexity of an algorithm. It involves analyzing the best-case running time, average case complexity, and worst-case performance of an algorithm. The goal of this type of analysis is to determine how well an algorithm performs in different scenarios based on its input size.

Let’s say you have a list with seven items in it and you’re going to build a for loop to iterate through this list to find a specific number.

| 1        | 2   | 3   | 4           | 5   | 6   | 7         |
| -------- | --- | --- | ----------- | --- | --- | --------- |
| Ω (Best) |     |     | Θ (Average) |     |     | Ο (Worst) |

If you’re looking for the number 1, this is your best case scenario. You’re going to find this in 1 operation. When someone talks about the best case scenario for running a piece of code, that is **Omega(Ω)**.

But if you’re looking for the number 7, that is your worst case scenario. You have to iterate through the entire list to be able to get to it. The worst case is **Omicron(Ο)**.

If you’re looking for the number 4, that’s your average case. The average case is **theta(Θ)**.  
<br>

### Omega(Ω): Best Case

It defines the best case of an algorithm’s time complexity, the Omega notation defines whether the set of functions will grow faster or at the same rate as the expression. Furthermore, it explains the minimum amount of time an algorithm requires to consider all input values.  
<br>

### Theta(Θ): Average Case

It defines the average case of an algorithm’s time complexity, the Theta notation defines when the set of functions lies in both O(expression) and Omega(expression), then Theta notation is used. This is how we define a time complexity average case for an algorithm.  
<br>

### Omicron(Ο): Worst Case

It defines an algorithm’s worst-case time complexity by using the **Big-O notation**, which determines the set of functions grows slower than or at the same rate as the expression. Furthermore, it explains the maximum amount of time an algorithm requires to consider all input values.

BigO Chect Sheet: https://www.bigocheatsheet.com/

#### Simplifying Big O Expressions

When determining the time complexity of an algorithm, there are some helpful rule of thumbs for big O expressions. These rules of thumb are consequences of the definition of big O notation.

1. Constants Don't Matter
   - O(2n) ❌ => O(n)
   - O(500) ❌ => O(1)
   - O(13n^2) ❌ => O(n^2)
2. Smaller Terms Don't Matter
   - O(n + 10) ❌ => O(n)
   - O(1000n + 50) ❌ => O(n)
   - O(n^2 + 5n + 8) ❌ => O(n^2)

#### Big O Shorthands

Analyzing complexity with big O can get complicated. There are several rules of thumb that can help. These rules won't ALWAYS work, but are a helpful starting point.

- Arithmetic operations are constant
- Variable assignment is constant
- Accessing elements in an array (by index) or object (by key) is constant
- In a loop, the the complexity is the length of the loop times the complexity of whatever happens inside of the loop

<br>
<hr>

## Space Complexity

Space Complexity is usually referred to as **the amount of memory** consumed by the algorithm. Let’s say that code 1 while it runs fast, comparatively, it takes up a lot of memory when it runs. And maybe code 2, even though that takes much longer to finish, maybe it takes up less memory. If preserving memory space is your most important priority and you don’t mind having some extra time complexity. Maybe code 2 is better for this case.  
<br>

Sometimes you'll hear the term auxiliary space complexity to refer to space required by the algorithm, not including space taken up by the inputs. Unless otherwise noted, when we talk about space complexity, technically we'll be talking about auxiliary space complexity.  
<br>

### Space Complexity (in JS)

- Most primitives (booleans, numbers, undefined, null) are constant space
- Strings require O(n) space (where n is the string length)
- Reference types are generally O(n), where n is the length (for arrays) or the number of keys (for objects)
