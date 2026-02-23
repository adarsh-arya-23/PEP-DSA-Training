// Backtracking: Undoing the previous step and moving to previous part.
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


#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    bool isValid(vector<vector<char>> &board, int r, int c, char num){
        for (int i = 0; i < 9; i++){
            if (board[r][i] == num)
                return false;
            if (board[i][c] == num)
                return false;
            if (board[3 * (r / 3) + i / 3][3 * (c / 3) + i % 3] == num)
                return false;
        }
        return true;
    }
    bool sol(vector<vector<char>> &board){
        for (int r = 0; r < 9; r++){
            for (int c = 0; c < 9; c++){
                if (board[r][c] == '.'){
                    for (char num = '1'; num <= '9'; num++){
                        if (isValid(board, r, c, num)){
                            board[r][c] = num;
                            if (sol(board))
                                return true;
                            else
                                board[r][c] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>> &board){
        sol(board);
    }
};
    int main(){
        Solution s;
        vector<vector<char>> board = {
            {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
            {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
            {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
            {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
            {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
            {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
            {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
            {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
            {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
        s.solveSudoku(board);
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }
