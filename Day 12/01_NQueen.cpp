#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<int>> board;
int solutionCount = 0;

bool isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) return false;
    }
    
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) return false;
    }
    
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 1) return false;
    }
    
    return true;
}

void solve(int row) {
    if (row == n) {
        solutionCount++;
        return;
    }
    
    for (int col = 0; col < n; col++) {
        if (isSafe(row, col)) {
            board[row][col] = 1;
            solve(row + 1);
            board[row][col] = 0; 
        }
    }
}

void printBoard() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (board[i][j] ? "Q " : ". ");
        }
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    cin >> n;
    board.assign(n, vector<int>(n, 0));
    
    solve(0);
    cout << "Total solutions: " << solutionCount << "\n";
    
    return 0;
}