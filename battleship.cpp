#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

const int GRID_SIZE = 10;

struct GridType{
    bool isShip;
    bool isGuessed;
};

struct BoardType{
    GridType GridSpace[GRID_SIZE][GRID_SIZE];
    int spaceCount = GRID_SIZE;
    int shipSpaces; // Win condition
};

// Currently sets every space to the ocean character and unguessed
void InitBoard(/* INOUT */ BoardType &Board);

// Currently just sets a random spaces on the board to have isShip = true
// Still makes sure there are a certain amount of ship spaces (maxShipSpaces)
void PlaceShips(/* INOUT */ BoardType &Board);

// Returns what character PrintBoard is supposed to display for each space on the grid
char GetSpaceVisual(/* IN */ GridType space);

// Currently shows where ships are regardless of hit (for testing)
void PrintBoard(/* IN */ BoardType const Board);

int main()
{
    BoardType Board;

    InitBoard(Board);
    PlaceShips(Board);
    PrintBoard(Board);

    return 0;
}

// Currently sets every space to the ocean character and unguessed
void InitBoard(/* INOUT */ BoardType &Board)
{
    // loop through each element in row
    for(int row = 0; row < Board.spaceCount; row++)   // row increment
    {
        // loop through each element in col
        for(int col = 0; col < Board.spaceCount; col++)   // column increment
        {
            // set space isShip and isGuessed to false
            Board.GridSpace[row][col].isShip = false;
            Board.GridSpace[row][col].isGuessed = false;
        }
    }
}

// Currently just sets a random spaces on the board to have isShip = true
// Still makes sure there are a certain amount of ship spaces (maxShipSpaces)
void PlaceShips(/* INOUT */ BoardType &Board)
{
    int row;
    int col;
    int maxShipSpaces = 15;

    srand(time(NULL));  // random seed based on system time

    int shipSpaceCounter = 0;
    while(shipSpaceCounter < maxShipSpaces)
    {
        row = rand() % 10;
        col = rand() % 10;
        Board.GridSpace[row][col].isShip = true;
        shipSpaceCounter++;
    }
}

// Returns what character PrintBoard is supposed to display for each space on the grid
char GetSpaceVisual(GridType space)
{
    // If the space is part of a ship
    if (space.isShip == true)
    {
        // If it's a ship hit
        if (space.isGuessed == true)
            return '#';
        // If it's a ship that hasn't been hit
        else
            return 'H';
    }
    // If the space is ocean
    else
    {
        // If it's a miss
        if (space.isGuessed == true)
            return '.';
        // If it's just ocean that hasnt been guessed
        else
            return '~';
    }
}

// Currently shows where ships are regardless of hit (for testing)
void PrintBoard(/* IN */ BoardType const Board)
{
    // loop through each element in 2d array
    for(int row = 0; row < Board.spaceCount; row++)   // row increment
    {
        for(int col = 0; col < Board.spaceCount; col++)   // column increment
        {
            cout << GetSpaceVisual(Board.GridSpace[row][col]) << ' ';
        }
        cout << endl;
    }
}
