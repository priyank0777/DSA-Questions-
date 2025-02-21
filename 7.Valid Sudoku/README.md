## Valid Sudoku

### Problem Statement:
Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
1. Each row must contain the digits 1-9 without repetition.
2. Each column must contain the digits 1-9 without repetition.
3. Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

### Note:
A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.

### Examples:
1. **Example 1**:
   - **Input**: 
     ```python
     board = [["5","3",".",".","7",".",".",".","."]
              ,["6",".",".","1","9","5",".",".","."]
              ,[".","9","8",".",".",".",".","6","."]
              ,["8",".",".",".","6",".",".",".","3"]
              ,["4",".",".","8",".","3",".",".","1"]
              ,["7",".",".",".","2",".",".",".","6"]
              ,[".","6",".",".",".",".","2","8","."]
              ,[".",".",".","4","1","9",".",".","5"]
              ,[".",".",".",".","8",".",".","7","9"]]
     ```
   - **Output**: true

2. **Example 2**:
   - **Input**: 
     ```python
     board = [["8","3",".",".","7",".",".",".","."]
              ,["6",".",".","1","9","5",".",".","."]
              ,[".","9","8",".",".",".",".","6","."]
              ,["8",".",".",".","6",".",".",".","3"]
              ,["4",".",".","8",".","3",".",".","1"]
              ,["7",".",".",".","2",".",".",".","6"]
              ,[".","6",".",".",".",".","2","8","."]
              ,[".",".",".","4","1","9",".",".","5"]
              ,[".",".",".",".","8",".",".","7","9"]]
     ```
   - **Output**: false
   - **Explanation**: Same as Example 1, except with the 5 in the top left corner being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.

### Constraints:
- `board.length == 9`
- `board[i].length == 9`
- `board[i][j]` is a digit `1-9` or `'.'`.

### Approach:
1. **Create Sets**: We'll use sets to track the numbers seen in each row, column, and 3x3 sub-box.
2. **Iterate through the Board**: For each cell, we'll check if the number is already in the corresponding row, column, or sub-box set.
3. **Check for Duplicates**: If the number is found in any of the sets, return `false`.
4. **Add Number to Sets**: If the number is not found in the sets, add it to the corresponding row, column, and sub-box sets.
5. **Return `true` if No Duplicates**: If we complete the iteration without finding any duplicates, return 