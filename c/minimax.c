#include <stdio.h>
#include<limits.h>

char board[9] = {'-','-','-','-','-','-','-','-','-'};

static char PLAYER = 'X'; // tambem representado no código por -1
static char PC = 'O';// tambem representado no código por 1
int turno=0;



void drawboard(){
    for (int i = 0; i < 9; i++)
    {
        printf("  %c  ",board[i]);
        if(i == 2 || i ==5 || i == 8)
            printf("\n");
    }
    
}
void playerMove(){
    int move;
    do{
        printf("Sua vez:\n");
        scanf("%d", &move);
    }while(move > 8 || move <0 || board[move]!='-');
    board[move] = PLAYER;
    turno++;
}
char checkWinner(){
    int wins[8][3] = {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
    for (int i = 0; i < 8; i++)
    {
        if(board[wins[i][0]] == board[wins[i][1]] && board[wins[i][0]] == board[wins[i][2]] && board[wins[i][0]] != '-'){
            return board[wins[i][0]]; // X ganhou
        }
    
    }
    return 'N'; // ninguem ganhou;
}
int gridChar(char let){
    switch (let)
    {
    case 'X':
        return -1;
        break;
    case 'O':
        return 1;
    case 'N':
        return 0;
    default:
        return 0;;
    }
}
int minimax(int depth, char next){    
    int move = -1;
    int bestScore;
    if(gridChar(checkWinner()) != 0){
        return gridChar(checkWinner());
    }
    if(next == PLAYER){
        int bestScore = INT_MAX;
        for (int i = 0; i < 9; i++)
        {
            if (board[i]=='-')
            {
                board[i] = PLAYER;
                int score = minimax(depth+1,PC);
                board[i] = '-';
                if (score < bestScore)
                {
                    bestScore = score;
                    move = i;
                }
                
            }
        }
        if(move == -1)
            return 0;
        return bestScore;
    }else if(next == PC){
        int bestScore = INT_MIN;
         for (int i = 0; i < 9; i++)
        {
            if (board[i]=='-')
            {
                board[i] = PC;
                int score = minimax(depth+1,PLAYER);
                board[i] = '-';
                if (score > bestScore)
                {
                    bestScore = score;
                    move = i;
                }
                
            }
            
        }
        if(move == -1)
            return 0;
        return bestScore;
    }
   
    
} 
void pcMove(){
    int score;
    int bestScore = INT_MIN;
    int bestMove = -1;
    for (int i = 0; i < 9; i++)
    {
        if(board[i]== '-'){
            board[i] = PC;
            
            score = minimax(0,PLAYER);
            board[i]= '-';

            if(score > bestScore){
                bestScore = score;
                bestMove = i;
            }
        }
    }
    board[bestMove]= PC;
    turno++;
    
}
int main(){
    printf("O primeiro jogador é o [X] e o segundo [O]\n");
	printf("Escolha uma posição(0-8) \n");
    while (turno <9)
    {
        drawboard();
        playerMove();
        if(checkWinner() != 'N'){
            drawboard();
            printf("%c GANHOU\n",checkWinner());
            break;
        }
        pcMove();
        if(checkWinner() != 'N'){
            system("clear");
            printf("%c GANHOU\n",checkWinner());
            drawboard();
            break;
        }
    }
    printf("%d--\n",turno);
    if(turno > 9){
        printf("EMPATE\n");
    }
    
    return 0;
}