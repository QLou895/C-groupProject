// File name :
// Authors: Luis Quinones, Jeyden Pena and Deon Rennie
// Date: December 9th, 2020
// Program Description:
// Input: 
// Processing:
// Output:

#include <iostream>
#include <string>
using namespace std;

//prototypes
void gameRules();
void menu();
void play(char[][5], char);
void initBoard(char[][5]);
void showBoard(char[][5]);


// Function to play the Game

void play(char b[][5], char symbol) {
    int r, c;

    cout << "Enter row and col: ";
    cin >> r >> c;

    //input validation
    while (b[r][c] != ' ') {

        cout << "Wrong move" << endl;
        cout << "Enter row and col: ";

    }
    b[r][c] = symbol;

};

// Rows and Columns
void initBoard(char b[][5]) {
    //Rows
    for (int i = 0; i < 5; i++) {
        //Columns
        for (int j = 0; j < 5; j++) {
            b[i][j] = ' ';
        }
    }
};

// Show board function
void showBoard(char b[][5]) {
    for (int row = 0; row < 5; row++) {
        cout << "|";

        for (int col = 0; col < 5; col++) {
            cout << b[row][col] << "|";

        }
        cout << endl;

    }
    cout << endl;

};

// Insert a menu
void menu()
{
    cout << "\nWelcome to the Everglades Ranger! \n Your timing is impeccable! We need you to go and find some Survivers!\n A group of people have sent an SoS and are stranded. You must hurry before one of the many dangerous \n animalas in the Everglades gets to them first.";
    cout << "\n\nMain Menu:\n";
    cout << "1) See Rules \n";
    cout << "2) Play Game \n";
    cout << "3) Quit \n";
    cout << endl;
};


void gameRules()
{
    //Enter all game rules here
    cout << "\tLost in the Everglades\n";
    cout << "\t\tRules";
    cout << " ";
    cout << endl;
};


//************************************************ Driver ********************************************************************
int main()
{    // Variables
    int choice, turns = 0;
    
    //the game board
    char board[5][5] = { {' ',' ',' ',' ',' '},{' ',' ',' ',' ',' '},{' ',' ',' ',' ',' '},{' ',' ',' ',' ',' '},{' ',' ',' ',' ',' '} };

    // Display Menu
    menu();

    while (true) {
        cout << "Please enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            //function for rules
            gameRules();
            break;
        case 2:
            //make a loop based on the gong count
                initBoard(board);
                showBoard(board);
            while (turns < 6) {

            //function to play games
                play(board, 'R');
                turns++;
            }

            break;
        case 3:
            cout << "Thanks for playing\n\n";
            exit(3);
            break;
            //Validation
        default:cout << "Please make a valid choice\n";
            break;

        }
    }
}

