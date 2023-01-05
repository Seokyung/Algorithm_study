//2580 스도쿠
#include <iostream>
using namespace std;

#define MAX 9

int sudoku[MAX][MAX];
bool sudokuRow[MAX][MAX+1];
bool sudokuCol[MAX][MAX+1];
bool sudokuSquare[MAX][MAX+1];

bool solve(int cnt) {
    int row = cnt / MAX;
    int col = cnt % MAX;

    if(cnt == 81) {
        return true;
    }

    if(sudoku[row][col] == 0) {
        for(int i=1;i<=9;i++) {
            if((sudokuRow[row][i] == false) && (sudokuCol[col][i] == false) && (sudokuSquare[(row/3)*3 + (col/3)][i] == false)) {
                sudokuRow[row][i] = true;
                sudokuCol[col][i] = true;
                sudokuSquare[(row/3)*3 + (col/3)][i] = true;
                sudoku[row][col] = i;

                if(solve(cnt+1)) {
                    return true;
                }

                sudokuRow[row][i] = false;
                sudokuCol[col][i] = false;
                sudokuSquare[(row/3)*3 + (col/3)][i] = false;
                sudoku[row][col] = 0;
            }
        }
    }
    else {
        return solve(cnt+1);
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            cin>>sudoku[i][j];

            if(sudoku[i][j] != 0) {
                sudokuRow[i][sudoku[i][j]] = true;
                sudokuCol[j][sudoku[i][j]] = true;
                sudokuSquare[(i/3)*3 + (j/3)][sudoku[i][j]] = true;
            }
        }
    }

    solve(0);

    for(int i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            cout<<sudoku[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}