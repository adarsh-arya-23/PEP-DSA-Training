// Backtracking: undoing the previous step and moving to previous part.
/*

Leetcode  BrutForce Approach:- 37. Sudoku Solver

-> We can solve this problem using backtracking. We will start from the first cell and try to fill it with a number from 1 to 9. If the number is valid, we will move to the next cell and repeat the process. If we find a cell that cannot be filled with any number, we will backtrack and try a different number for the previous cell.
-> The time complexity of this approach is O(9^(n*n)) where n is the size of the board (9 in this case) because in the worst case, we may have to try all numbers for all cells.
-> The space complexity is O(n*n) for the recursion stack in the worst case.
-> The algorithm can be implemented as follows:
    1. Create a function `isValid` that checks if placing a number in a cell is valid according to Sudoku rules.
    2. Create a recursive function `solveSudoku` that tries to fill the board.
    3. In the `solveSudoku` function, iterate through each cell of the board. If the cell is empty, try placing numbers from 1 to 9.
    4. If placing a number is valid, recursively call `solveSudoku` to fill the next cell.
    5. If the recursive call returns true, it means the board is solved, and we can return true.
    6. If the recursive call returns false, it means the current number placement did not lead to a solution, so we will backtrack by resetting the cell to empty and trying the next number.


*/