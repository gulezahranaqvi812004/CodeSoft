#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
bool checkwin();
void boardgame();
void ColorFunction(int colorCode);
void playgame();
void header();
char token = 'x';
int col;
int row;
bool draw = false;
string player1 = " ";
string player2 = " ";
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
main()
{
    system("cls");
    cout << endl;
   
   header();
    cout << endl;
    cout << " Enter player number: " ;
    getline(cin, player1);
    cout << "Enter player number2: " ;
    getline(cin, player2);
    for (int i = 0; i < 9; i++)
    {
        {
            boardgame();
            playgame();
            checkwin();
        }
        if (token == 'x' && draw == false)
        {
            boardgame();
            cout << player2 << " "
                 << "Wins the game" << endl;
        }
        else if (token == 'o' && draw == false)
        {
            boardgame();
            cout << player1 << " "
                 << "Wins the gme" << endl;
        }
        if (checkwin() == true)
        {
            break;
        }
        else
        {

            cout << "Game has drawn" << endl;
        }
    }
}
void header()
{
     ColorFunction(3);
    cout << "      # #####  ######    ####             # #####   ###      ####             # #####  #####   #######  " << endl;
    cout << "    ## ## ##    ##     ##  ##           ## ## ##  ## ##    ##  ##           ## ## ## ### ###   ##   #  " << endl;
    cout << "       ##       ##    ##                   ##    ##   ##  ##                   ##    ##   ##   ##       " << endl;
    cout << "       ##       ##    ##                   ##    ##   ##  ##                   ##    ##   ##   ####    " << endl;
    cout << "       ##       ##    ##                   ##    #######  ##                   ##    ##   ##   ##      " << endl;
    cout << "       ##       ##     ##  ##              ##    ##   ##   ##  ##              ##    ### ###   ##   #  " << endl;
    cout << "      ####    ######    ####              ####   ##   ##    ####              ####    #####   #######  " << endl;
}
void boardgame()
{
    system("cls");
    cout << endl;
    cout << endl;
    cout << player1 << " (X)  / " << player2 << "(O)" << endl;
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;

    cout << "     |     |     " << endl
         << endl;
}
void playgame()
{
    int digit;

    if (token == 'x')
    {
        cout << player1 << " "
             << "enter your turn";
        cin >> digit;
    }
    if (token == 'o')
    {
        cout << player2 << " "
             << "enter your turn";
        cin >> digit;
    }
    if (digit == 1)
    {
        row = 0;
        col = 0;
    }
    if (digit == 2)
    {
        row = 0;
        col = 1;
    }
    if (digit == 3)
    {
        row = 0;
        col = 2;
    }
    if (digit == 4)
    {
        row = 1;
        col = 0;
    }
    if (digit == 5)
    {
        row = 1;
        col = 1;
    }
    if (digit == 6)
    {
        row = 1;
        col = 2;
    }
    if (digit == 7)
    {
        row = 2;
        col = 0;
    }
    if (digit == 8)
    {
        row = 2;
        col = 1;
    }
    if (digit == 9)
    {
        row = 2;
        col = 2;
    }
    else
    {
        if (digit < 1 || digit > 9)
        {
            cout << "invalid entry" << endl;
            playgame();
        }
    }
    if (token == 'x' && board[row][col] != 'x' && board[row][col] != 'o')
    {
        board[row][col] = 'x';
        token = 'o';
    }
    else if (token == 'o' && board[row][col] != 'x' && board[row][col] != 'o')
    {
        board[row][col] = 'o';
        token = 'x';
    }

    else
    {
        cout << "there is no empty space" << endl;
        playgame();
    }
}

bool checkwin()
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return true;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return true;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'x' && board[i][j] != 'o')
            {
                return false;
            }
        }
    }
    draw = true;
    return false;
}
void ColorFunction(int colorCode)
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(consoleHandle, colorCode);
}