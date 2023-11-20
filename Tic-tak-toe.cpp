#include <iostream>
#include <vector>

// Function to display the Tic-Tac-Toe board
void displayBoard(const std::vector<std::vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            std::cout << cell << ' ';
        }
        std::cout << '\n';
    }
}

// Function to check if a player has won
bool checkWin(const std::vector<std::vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

// Function to check if the board is full (a tie)
bool checkTie(const std::vector<std::vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ')
                return false; // There is an empty cell, so the game is not a tie
        }
    }
    return true; // All cells are filled, so the game is a tie
}

// Function to make a move
void makeMove(std::vector<std::vector<char>>& board, int row, int col, char player) {
    if (board[row][col] == ' ') {
        board[row][col] = player;
    } else {
        std::cout << "Invalid move! Cell already occupied. Try again.\n";
    }
}

int main() {
    std::vector<std::vector<char>> board(3, std::vector<char>(3, ' ')); // Initialize an empty 3x3 board
    char currentPlayer = 'X';

    while (true) {
        // Display the current state of the board
        displayBoard(board);

        // Get the player's move
        int row, col;
        std::cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        std::cin >> row >> col;

        // Make the move
        makeMove(board, row, col, currentPlayer);

        // Check for a win or tie
        if (checkWin(board, currentPlayer)) {
            displayBoard(board);
            std::cout << "Player " << currentPlayer << " wins!\n";
            break;
        } else if (checkTie(board)) {
            displayBoard(board);
            std::cout << "It's a tie!\n";
            break;
        }

        // Switch to the other player for the next turn
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
