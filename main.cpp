#include<iostream>
#include"tictac.h"
#include<array>

using namespace std;

int main() {
    bool haswon = false;
    bool wannaPlayAgain = true;
    array<array<char, 3>, 3> board = formatTable();

    cout << "Welcome to Tic Tac Toe!" << endl;
    cout << "Here is the initial game board:" << endl;
    printTable(board);

    cout << "Enter the number corresponding to the cell you want to mark." << endl;
    cout << "Player 1 will use 'X' and Player 2 will use 'O'." << endl;
    while (!haswon) {
        int cell;

        // Player 1
        cout << "Player 1 (X), enter the cell number: ";
        cin >> cell;
        if (insertXO(board, cell, 'X')) {
            printTable(board);
            if (checkWin(board, 'X')) {
                cout << "Player 1 (X) wins!" << endl;
                haswon = true;
                break;
            } else if (checkNoMoves(board)) {
                cout << "It's a draw! No more moves left." << endl;
                break;
            }
        } else {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        // Player 2
        cout << "Player 2 (O), enter the cell number: ";
        cin >> cell;
        if (insertXO(board, cell, 'O')) {
            printTable(board);
            if (checkWin(board, 'O')) {
                cout << "Player 2 (O) wins!" << endl;
                haswon = true;
                break;
            } else if (checkNoMoves(board)) {
                cout << "It's a draw! No more moves left." << endl;
                break;
            }
        } else {
            cout << "Invalid move. Try again." << endl;
            continue;
        }
    }

    return 0;
}

