// C++groupProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* Summary of the program:
* 
*This program is a texted based game, that takes place in the everglades. The Ranger (aka the player) is tasked with saving a group of survivors.
*The player must move fast and make critical choices for they only have 12 gongs of time along with the ever presents of dangerous animals as you travers the Glades in hopes to rescue the few survivors.
*/

// *********************** Prototypes ********************************* //
int mainMenu(int x);



// *********************** functions ********************************** //



#include <iostream>
using namespace std;


int main()
{
    // variables 
    int option;

    //This is the main menu for the Everglades game 

    printf("Welcome to the Everglades Ranger! \n Your timing is impeccable! We need you to go and find some Survivers!\n A group of people have sent an SoS and are stranded. You must hurry before one of the many dangerous \n animalas in the Everglades gets to them first.");
    printf("\n\nMain Menu:\n");
    printf("1) Play Game \n2) Game Rules \n3) Exit \n\n Enter choice: ");
    cin >> option;
    mainMenu(option);

}

// *********************** functions ********************************** //
//this is the mainMenu decision tree. The outcome is based on the input of the user


int mainMenu(int x) {

    int y;
    // make a try/catch to handle issue

    do {

        switch (x) {
            //if the player decides to play the game they must enter an interger value of 1.
        case 1:
            cout << "You are plaing the game";
            // here is where the start game function will go
            
            // the timer should be in here as well.
            break;
            //if the player decides to read the game rules first. they must enter an interger value of 2.
        case 2:
            cout << "These are the rules:";
            printf("\nMain Menu:\n");
            printf("1) Play Game \n2) Game Rules \n3) Exit \n\n What will you do: ");
            cin >> y;
            mainMenu(y);
            break;
            //if the player decides they dont want to play. They may exit the game by entering an interger value of 3.
        case 3:
            return 0;
            //this comes up if the player entered anything else other than a value between 1-3.
        default:
            // this part of the function checks to see if the entered a number. if not, 
            while(!(cin >> x)){
            printf("\n\t\tError: code_Id_tent");
            printf("\nMain Menu:\n");
            printf("1) Play Game \n2) Game Rules \n3) Exit \n\n Enter choice: ");
            cin.clear();
            cin.ignore(15, '\n');
            cin >> y;
            mainMenu(y);
            }
            break;
        }
    } while ( y != 3 );
    
}
/*
void isGreater() {
    if ((cin >> x) > 3 || x <= 0) {

    }
}
*/



/* This program was created by Deon, Jayden and Luis */