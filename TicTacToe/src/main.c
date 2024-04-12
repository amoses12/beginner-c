#include <stdio.h>

typedef char boardType[3][3];
void drawBoard(boardType*, int);
int checkForWin(boardType*, int*, int);
int markBoard(int, int, boardType*);

int main(void)
{
  int gameOver = 0;
  int turnCounter = 0;
  int chosenSpace;
  int player = 1;
  int winStatus = 0;
  int invalidTurn = 0;
  boardType board = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
  printf("THE BOARD FIRST SPOT IS: %c\n", board[0][0]);
  while (gameOver == 0)
  {
    printf("Game Over: %d\n", gameOver);
    drawBoard(&board, player);
    if (invalidTurn == 1)
    {
      printf("Invalid Turn please try again: \n");
    }
    scanf("%d", &chosenSpace);
    int markCheck = markBoard(chosenSpace, player, &board);
    if (markCheck == 0)
    {
      winStatus = checkForWin(&board, &gameOver, turnCounter);
      if (winStatus == 0)
      {
        invalidTurn = 0;
        player = player == 1 ? 2 : 1;
        turnCounter++;
      }
    }
    else
    {
      invalidTurn = 1;
      continue;
    }
  }

  if (winStatus == 1)
  {
    printf("Player %d wins!\n", player);
  }
  else if (winStatus == 2)
  {
    printf("Draw!\n");
  }
  return 0;
}

int checkForWin(boardType* boardArr, int* gameOver, int turnCounter)
{
  printf("Value: %c\n", (*boardArr)[0][0]);
  printf("Value: %c\n", (*boardArr)[0][1]);
  printf("Value: %c\n", (*boardArr)[0][2]);
  if (((*boardArr)[0][0] == (*boardArr)[0][1] &&
       (*boardArr)[0][1] == (*boardArr)[0][2]) ||
      ((*boardArr)[1][0] == (*boardArr)[1][1] &&
       (*boardArr)[1][1] == (*boardArr)[1][2]) ||
      ((*boardArr)[2][0] == (*boardArr)[2][1] &&
       (*boardArr)[2][1] == (*boardArr)[2][2]) ||
      ((*boardArr)[0][0] == (*boardArr)[1][0] &&
       (*boardArr)[1][0] == (*boardArr)[2][0]) ||
      ((*boardArr)[0][1] == (*boardArr)[1][1] &&
       (*boardArr)[1][1] == (*boardArr)[2][1]) ||
      ((*boardArr)[0][2] == (*boardArr)[1][2] &&
       (*boardArr)[1][2] == (*boardArr)[2][2]) ||
      ((*boardArr)[0][0] == (*boardArr)[1][1] &&
       (*boardArr)[1][1] == (*boardArr)[2][2]) ||
      ((*boardArr)[0][2] == (*boardArr)[1][1] &&
       (*boardArr)[1][1] == (*boardArr)[2][0]))
  {
    *gameOver = 1;
    return 1;
  }
  else if (turnCounter == 9)
  {
    return 2;
  }
  return 0;
}

void drawBoard(boardType* boardArr, int player)
{
  printf("\n        Tic Tac Toe       \n\n");
  printf("Player 1 (X)  -  Player 2(O)\n\n");
  printf("     |     |     \n");
  printf("  %c  |  %c  |  %c  \n", (*boardArr)[0][0], (*boardArr)[0][1],
         (*boardArr)[0][2]);
  printf("_____|_____|_____\n");
  printf("     |     |     \n");
  printf("  %c  |  %c  |  %c  \n", (*boardArr)[1][0], (*boardArr)[1][1],
         (*boardArr)[1][2]);
  printf("_____|_____|_____\n");
  printf("     |     |     \n");
  printf("  %c  |  %c  |  %c  \n", (*boardArr)[2][0], (*boardArr)[2][1],
         (*boardArr)[2][2]);
  printf("     |     |     \n\n");
  printf("Player %d, enter a number: \n", player);
}

int markBoard(int mark, int player, boardType* boardArr)
{
  char playerMark = player == 1 ? 'x' : 'o';
  switch (mark)
  {
    case 1:
      if ((*boardArr)[0][0] == '1')
      {
        (*boardArr)[0][0] = playerMark;
      }
      break;
    case 2:
      if ((*boardArr)[0][1] == '2')
      {
        (*boardArr)[0][1] = playerMark;
      }
      break;
    case 3:
      if ((*boardArr)[0][2] == '3')
      {
        (*boardArr)[0][2] = playerMark;
      }
      break;
    case 4:
      if ((*boardArr)[1][0] == '4')
      {
        (*boardArr)[1][0] = playerMark;
      }
      break;
    case 5:
      if ((*boardArr)[1][1] == '5')
      {
        (*boardArr)[1][1] = playerMark;
      }
      break;
    case 6:
      if ((*boardArr)[1][2] == '6')
      {
        (*boardArr)[1][2] = playerMark;
      }
      break;
    case 7:
      if ((*boardArr)[2][0] == '7')
      {
        (*boardArr)[2][0] = playerMark;
      }
      break;
    case 8:
      if ((*boardArr)[2][1] == '8')
      {
        (*boardArr)[2][1] = playerMark;
      }
      break;
    case 9:
      if ((*boardArr)[2][2] == '9')
      {
        (*boardArr)[2][2] = playerMark;
      }
      break;
    default:
      return -1;
  }
  return 0;
}