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