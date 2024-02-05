#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

char Board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9' };

void DrawBoard()
{
    printf("\t tic-tac-toe\n\n");
    printf("Player 1(X) - Player 2(O)\n\n\n");
    
    //drawing the board one row at a time
    for(int i = 0; i<9; i++)
    {
        printf("   |   |   \n");
        printf(" %c | %c | %c\n", Board[ i ], Board[i+1], Board[i+2]);
        i += 2;
        printf("___|___|___\n");
    }
}


void MarkBoard( bool PlayerOne)
{
    int PlayerNum;
    int Choice;
    
    //set player num for output
    if(PlayerOne)
        PlayerNum = 1;
    else
        PlayerNum = 2;
    
    //print first message asking for input
    printf("\nPlayer %d, Enter your choice: ", PlayerNum);
    scanf("%d",&Choice);
    
    //asking for input again if choice is invalid
    while(Board[Choice-1] == 'X' || Board[Choice-1] == 'O' || Choice > 9 || Choice < 1)
    {
        printf("\nInvalid Input");
        printf("\nPlayer %d, Enter your choice: ", PlayerNum);
        scanf("%d",&Choice);
    }
    
    //marking the board
    if(PlayerOne)
        Board[Choice-1] = 'X';
    else
        Board[Choice-1] = 'O';
}


bool CheckForWin()
{
    bool IsGameOver = false;
    bool Draw = true;
    
    if((Board[0]==Board[1] && Board[1]==Board[2] && Board[0] == 'X') ||(Board[3]==Board[4] && Board[4]==Board[5] && Board[3] == 'X') || (Board[6]==Board[7] && Board[7]==Board[8] && Board[6] == 'X') || (Board[0]==Board[3] && Board[3] ==Board[6] && Board[0] == 'X') ||(Board[1]==Board[4] && Board[4]==Board[7] && Board[1] == 'X') ||(Board[2]==Board[5] && Board[5]==Board[8] && Board[2] == 'X') || (Board[0]==Board[4] && Board[4]==Board[8] && Board[0] == 'X') || (Board[2]==Board[4] && Board[4]==Board[6] && Board[2] == 'X'))
    {
        printf("\n==>Player 1 Win");
        IsGameOver = true;
    } 
    
    else if((Board[0]==Board[1] && Board[1]==Board[2] && Board[0] == 'O') ||(Board[3]==Board[4] && Board[4]==Board[5] && Board[3] == 'O') || (Board[6]==Board[7] && Board[7]==Board[8] && Board[6] == 'O') || (Board[0]==Board[3] && Board[3] ==Board[6] && Board[0] == 'O') ||(Board[1]==Board[4] && Board[4]==Board[7] && Board[1] == 'O') ||(Board[2]==Board[5] && Board[5]==Board[8] && Board[2] == 'O') || (Board[0]==Board[4] && Board[4]==Board[8] && Board[0] == 'O') || (Board[2]==Board[4] && Board[4]==Board[6] && Board[2] == 'O'))
    {
        printf("\n==>Player 2 Win");
        IsGameOver = true;
    }
    
    //Check for draw
    else
    {
        for(int i=0;i<9;i++)
        {
            if(Board[i] >= 49 && Board[i] <= 57) //a digit is present
            {
                Draw = false;
            }
        }
        if(Draw)
        {
            printf("\n==>Draw Game");
            IsGameOver = true;
        }
    }
    
    return IsGameOver;
}


int main(){
    
    bool IsGameOver = false;
    bool PlayerOne = true;
    
    while(!IsGameOver)
    {
        system("cls");
        
        DrawBoard();
        MarkBoard(PlayerOne);
        IsGameOver = CheckForWin();
        PlayerOne = !PlayerOne;
    }
    
    return 0;
}

