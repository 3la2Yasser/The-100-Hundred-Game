#include <iostream>
using namespace std;

int main() {
    // Print the rules of the game
    cout << "Two players start from 0 and alternatively add a number from 1 to 10 to the total. The player who reaches 100 first wins." << endl;

    // Initialize the sum variable to keep track of the total sum
    int sum = 0;
    cout << "Welcome To Hundred Game" << endl;

    int Player1, Player2; // Declare variables outside the loops

    // Loop until the sum reaches 100 or more
    while (sum < 100) {
        // Loop for Player 1's turn
        while (true) {
            cout << "Please enter a number, 1st Player: " << endl;
            cin >> Player1;
            // Check if the entered number is between 1 and 10
            if (Player1 >= 1 && Player1 <= 10 && sum + Player1 <= 100) {
                // Add the number to the sum
                sum += Player1;
                cout << "Current sum -> " << sum << endl;
                break;
            }
            else {
                cout << "PLease enter number between 1 and 10, And Your limit in the game is 100" << endl;
                cout << "Current sum ->" << sum << endl;
            }
        }

        // Check if the sum is equal to 100 after Player 1's turn
        if (sum == 100) {
            cout << "The winner is Player 1. Well Played <3" << endl;
            break; // Exit the game loop
        }

        // Loop for Player 2's turn
        while (true) {
            cout << "Please enter a number, 2nd Player: ";
            cin >> Player2;
            if (Player2 >= 1 && Player2 <= 10 && sum + Player2 <= 100) {
                sum += Player2;
                cout << "Current sum -> " << sum << endl;
                break;
            }
            else {
                cout << "PLease enter number between 1 and 10, And Your limit in the game is 100" << endl;
                cout << "Current sum ->" << sum << endl;
            }
        }

        // Check if the sum is equal to 100 after Player 2's turn
        if (sum == 100) {
            cout << "The winner is Player 2. Well Played <3" << endl;
            break; // Exit the game loop
        }
    }

    return 0;
}