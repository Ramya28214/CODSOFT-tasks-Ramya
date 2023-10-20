#include <iostream>
using namespace std;

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}}; 
char currPlayer = 'X';

void printBoard() {
    cout << "TIC TAC TOE" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "----" << endl;
    }
}

bool moveValid(int row, int col) {
    return (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' '); 
}

bool gameOver() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == currPlayer && board[i][1] == currPlayer && board[i][2] == currPlayer) {
            return true;
        }
        if (board[0][i] == currPlayer && board[1][i] == currPlayer && board[2][i] == currPlayer) {
            return true;
        }
    }
    if (board[0][0] == currPlayer && board[1][1] == currPlayer && board[2][2] == currPlayer) {
        return true;
    }
    if (board[0][2] == currPlayer && board[1][1] == currPlayer && board[2][0] == currPlayer) {
        return true;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') { 
                return false;
            }
        }
    }
    cout << "It's a draw" << endl;
    return true;
}

void makeMove() {
    int row, col;
    cout << "Player " << currPlayer << " enter row (0, 1, 2) and column (0, 1, 2) for your move: ";
    cin >> row >> col;
    if (moveValid(row, col)) {
        board[row][col] = currPlayer; 
    } else {
        cout << "Invalid move" << endl;
        makeMove();
    }
}

void switchPlayer() {
    if (currPlayer == 'X') {
        currPlayer = 'O';
    } else {
        currPlayer = 'X'; 
    }
}

int main() {
    bool gameWon = false;
    while (!gameWon) {
        printBoard();
        makeMove();
        gameWon = gameOver();
        switchPlayer();
    }
    printBoard();
    cout << "Player " << currPlayer << " wins! Congratulations" << endl; 
    return 0;
}
