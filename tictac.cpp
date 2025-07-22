#include<iostream>
#include"tictac.h"
#include<array>
using namespace std;

array<array<char, 3>, 3> formatTable() {
    return { {  {'1','2','3'},
                {'4','5','6'},
                {'7','8','9'} } };

}

void printTable(const array<array<char, 3>, 3>& board) {
    for (const auto& row : board) {
        for (const auto& cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

bool checkWin(const array<array<char, 3>, 3>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || // Row
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))  // Column
            return true;
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        return true;

    return false;
}

bool insertXO(array<array<char, 3>, 3>& board, int cell, char player) {
    switch (cell) {
        case 1: board[0][0] = player; break;
        case 2: board[0][1] = player; break;
        case 3: board[0][2] = player; break;
        case 4: board[1][0] = player; break;
        case 5: board[1][1] = player; break;
        case 6: board[1][2] = player; break;
        case 7: board[2][0] = player; break;
        case 8: board[2][1] = player; break;
        case 9: board[2][2] = player; break;
    }
}
