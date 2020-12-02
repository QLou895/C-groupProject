// C++groupProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// *********************** Prototypes ********************************* //
int choice(int x);

// *********************** functions ********************************** //


#include <iostream>
using namespace std;
int main()
{
    // variables 
    int option;

    // Ill be making this into a function 

    printf("Welcome to the Everglades Ranger! \n Your timing is impeccable! We need you to go and find some Survivers!\n A group of people have sent an SoS and are stranded. You must hurry before one of the many dangerous \n animalas in the Everglades gets to them first.");
    printf("Main Menu:\n");
    printf("1) Play Game \n2) Game Rules \n3) Exit \n\n Enter choice: ");
    cin >> option;
    choice(option);

}
//try making this into a void function to see if the loop gives a better result

int choice(int x) {
    int y;
    do {

        switch (x) {
        case 1:
            cout << "You are plaing the game";
            // here is where the start game function will go
            break;
        case 2:
            cout << "These are the rules:";
            printf("Main Menu:\n");
            printf("1) Play Game \n2) Game Rules \n3) Exit \n\n Enter choice: ");
            cin >> y;
            choice(y);
            break;
        case 3:
            return 0;
        default:
            printf("Error: code_Id_10t");
            break;
        }
    } while (choice != 0);
}
