# SOLUTION TO QUESTION 2
<br/>
<br/>
-To run code, you need the ```gcc``` C compiler installed.
-Next, run:
```
gcc <filename.c> -o <filename>
filename.exe
```
<br/>
<br/>
- Implement the following piecewise recurrence relation in the 3 different ways.
- Explain the differences (advantages, disadvantages) between the 3.
- Must be written in C

```
The problem
F(n) = F(n-3) + F(n -2) where F(0) = 0, F(1) = 1, and F(2) = 2.
Assume that n will be less than or equal to the maximum integer value and non-negative. You only need to 
write the function(s).
```
<br/>
<br/>
## ADVANTAGES AND DISADVANTAGES OF USED METHODS

- **Memoization**:
  - **ADVANTAGES**:
    - Utilises **top-to-bottom** solutions.
    - Solves subproblems on demand. Worst case: It solves all subproblems. Best case: It solves only a few of them, saving time. This is where it potentially does better than Tabulation.
    - It is a bit more intuitive to write.
  - **DISADVANTAGES**:
    - If the input or output is too large or complex, or if the input is random or unpredictable, memoization can consume a lot of memory and slow down the lookup process. 
    - Waste memory and computation by caching results that are never used again.


- **Tabulation**:
  - **ADVANTAGES**:
    - It works with **bottom-to-top** solutions.
    - It avoids multiple lookups, saving function call overhead time. Overhead is **any combination of excess or indirect computation time, memory, bandwidth, or other resources that are required to perform a specific task**.
  - **DISADVANTAGES**:
    - Results in complicated code when a lot of conditions are required.
    - Less intuitive than Memoization.


- **Space Optimization**:
- It saves space in system memory.
- It reduces function call overhead.
