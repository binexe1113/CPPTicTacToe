#include<iostream>
#include"tictac.h"
#include<array>

using namespace std;

int main(){
    // Declare players
    char playerX, playerO;
    // Initialize the game board
    array<array<char, 3>, 3> board = formatTable();

    cout<< "Welcome to Tic Tac Toe!" << endl;
    cout << "Here is the initial game board:" << endl;

   printTable(board);

   cout<<"Enter the number corresponding to the cell you want to mark." << endl;
   cout<<"Player 1 will use 'X' and Player 2 will use 'O'." << endl;

   
    return 0;
}
