#ifndef REVERSI_H
#define REVERSI_H

#include <utility>
using namespace std;

// Enumeration for Player Colours and Empty Space
typedef enum {
    PLAYER_NONE,
    PLAYER_DARK,
    PLAYER_LIGHT
} PlayerColor;


typedef struct {
    PlayerColor color;
} GamePiece;

typedef struct {
    GamePiece** board;
    int scoreLight = 2;
    int scoreDark = 2;
} Board;

// Function to initialize the game board
Board initializeBoard();

// Function render the game board
void renderBoard(const Board* board);

// Function to check if a move is valid
int isValidMove(const Board* board, int fromRow, char fromCol, int toRow, char toCol);

// Function to perform a move on the game board
void performMove(Board* board, int fromRow, char fromCol, int toRow, char toCol);

// Function to update score
void updateScore(Board* board);

// Function to return score
pair<int, int> getScore();

// Function to check if the game is over
int isGameOver(const Board* board);

// Function to free the memory for the Board
void freeBoard(Board* board);





#endif //REVERSI_H
