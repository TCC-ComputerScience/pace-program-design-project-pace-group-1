/* Battleship Part 1
The program uses a two-dimensional array as the basis for creating a one-player game of battleship.
(The computer generates the board and places the ships, and then the player has to guess the ship positions.)
PACE 4
April 26, 2021
*/
// Original pseudocode by Christiney Ponton
// Designed by all group 4 members
// Commented by Nolan Marchione
#include <iostream>
#include <iomanip>

using namespace std;

// Array Values
const int SEA_ROW = 10; // Row Maximum
const int SEA_COL = 10; // Column Maximum

// Pre: User started game of battleship
// Initialize the game board
// Post: Game board has been properly initialized for use
int getBoard(const int seaArray[][SEA_COL], int &rowLoc, int &colLoc);

// Pre: The game board has been properly initialized
// Print the game board
// Post: When the function is called, print the board with current game values
void printBoard(char seaArray[][SEA_COL], int rowLoc, int colLoc);

// Pre: The game board has been properly initialized
// Create the ships and set their location
// Post: The ships have been properly initalized
void setShips(int seaArray[][SEA_COL]);

// Pre: The ships have been created and set on the board
// Keeps the ships location on the board hidden from the user
// Post: Ship is either hidden or shown on the board
void shipLoc(int seaArray[][SEA_COL]);

// Pre: Everything has been properly initalized, user has guessed a ship location
// Checks if the given coordinates match that of a ship
// Post: Return the outcome of guessed location, true if the user hit a ship and false if the user missed
bool FindLoc(const int seaArray[][SEA_COL], int guessY, int guessX);

//Jared Simon - PACE Group 1
int getBoard(char seaArray[][SEA_COL], int &rowLoc, int &colLoc) {
    //Error handling
    cout << "In getBoard" << "\n";

    //Loop through every character in 2D array
    for (int i = 0; i <= 9; i++) {
        for (int y = 0; y <= 9; y++) {
            //Set character to water symbol
            seaArray[i][y] = '~';

            //TESTING ONLY
            cout << seaArray[i][y] << " ";
        }
        cout << "\n";
    }

    //Initialize rowLoc
    rowLoc = 1;
    //Initialize rowLoc
    colLoc = 1;
}

int main()
{
  char seaArray[SEA_ROW][SEA_COL]; //2D array
  int rowLoc,colLoc; //holds the value of the row and col of the board
  int guessX, guessY; //holds guessed values for ship location
  bool found = false; //tell if the value is found in the array

  //Initialize board
  getBoard(seaArray, rowLoc, colLoc);

  //call functions

  return 0;
}
