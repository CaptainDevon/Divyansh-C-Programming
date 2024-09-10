#include <iostream>
using namespace std;

class TicTacToe {
public:
    
    void display(char board[3][3]) 
    {
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                cout << "|" << board[i][j] << "|";
            }
            cout << endl;
        }
    }

    
    bool winning_condition(char board[3][3]) 
    {
        
        for (int i = 0; i < 3; ++i) 
        {
            if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) 
            {
                return true;
            }
        }


        for (int j = 0; j < 3; ++j) 
        {
            if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[1][j] == board[2][j]) 
            {
                return true;
            }
        }

       
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) 
        {
            return true;
        }
        if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) 
        {
            return true;
        }

        return false;
    }
};

int main() 
{
    int choice_row, choice_column;
    char board[3][3];  
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            board[i][j] = ' ';  
        }
    }

    char turn;
    int move_count = 0;
    TicTacToe t;
    cout<<"welcome to Tic Tac Toe"<<endl;
    while (move_count < 9) 
    {
        t.display(board);

        
        turn = (move_count % 2 == 0) ? 'X' : 'O';
        cout << "Player " << turn << ", enter your move (row and column): ";
        cin >> choice_row >> choice_column;

        
        if (choice_row < 1 || choice_row > 3 || choice_column < 1 || choice_column > 3) 
        {
            cout << "Invalid move. Please enter row and column between 1 and 3." << endl;
            continue;
        }
        if (board[choice_row - 1][choice_column - 1] != ' ') 
        {
            cout << "Cell already taken! Try again." << endl;
            continue;
        }

        
        board[choice_row - 1][choice_column - 1] = turn;

        
        if (t.winning_condition(board)) 
        {
            t.display(board);
            cout << "Player " << turn << " wins!" << endl;
            break;
        }

        move_count++;
    }

    
    if (move_count == 9) 
    {
        t.display(board);
        cout << "It's a tie!" << endl;
    }
    system("pause");
    return 0;
    

}
