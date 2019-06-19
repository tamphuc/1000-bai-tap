
#include <iostream>
using namespace std;

void input_array(int* *&board, int col, int row){
    board = new int *[row];
    for(int i=0; i < row; ++i){
        board[i] = new int [col];
    }
    
    for(int i=0; i < row; ++i){
        for(int j=0; j <col; ++j){
            board[i][j] = j;
            cout << "board["<<i<<"]["<<j<<"] : " ;
            cin >> board[i][j];
        }
        //cout << endl;
    }
}

void output_array(int* *board, int col, int row){
    
    for(int i=0; i < row; ++i){
        for(int j=0; j <col; ++j){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void arrange_main_diagonal_ascending (int* *&board, int col, int row){
    if (col!=row){
        cout << "Error!";
        return ;
    }
    int n =col;
    for (int i=0; i<n-1; ++i){
        for(int j=i+1; j<n; ++j){
            int min = board[i][i];
            if (board[j][j] < min){
                min = board[j][j];
                board[j][j] = board[i][i];
                board[i][i] = min;
            }
        }
    }
}
void arrange_secondary_diagonal_descending (int* *&board, int col, int row){
    if (col!=row){
        cout << "Error!";
        return ;
    }
    int n =col;
    for (int i=0; i<n-1; ++i){
        for(int j=i+1; j<n; ++j){
            int max = board[i][n-1-i];
            if (board[j][n-1-j] < board[i][n-1-i]){
                max = board[j][n-1-j];
                board[j][n-1-j] = board[i][n-1-i];
                board[i][n-1-i] = max;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int row, col;
    cout << "Enter row size : ";
    cin >> row;
    cout << "Enter col size : ";
    cin >> col;
    
    int ** board;
    
    input_array(board, col, row);
    output_array(board, col, row);
    arrange_main_diagonal_ascending(board, col, row);
    cout << "\n";
    output_array(board, col, row);
    arrange_secondary_diagonal_descending(board,col,row);
    cout << "\n";
    output_array(board, col, row);
    
    
}
