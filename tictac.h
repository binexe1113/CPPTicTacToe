using namespace std;

array<array<char, 3>, 3> formatTable();

void printTable(const array<array<char, 3>, 3>& board);

bool checkWin(const array<array<char, 3>, 3>& board, char player);

bool insertXO(array<array<char, 3>, 3>& board, int cell, char player);

bool checkNoMoves( array<array<char, 3>, 3>& board);
