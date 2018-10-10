#include <iostream>
#include <string>

using namespace std;

int main() {
	const int DIMENSIONS = 3;
	//char myBoard[DIMENSIONS][DIMENSIONS];
	int numPlayerOption = 2;
	char playerOne = 'X';
	char playerTwo = 'O';
	string boardGraphic = "Current Board:\n|11|12|13|\n|21|22|23|\n|31|32|33|\n";
	int previousTurn = 1;
	bool gameEnd = 1;
	string placeIndex;
	int placeIndexPosition;

	cout << "Welcome to Tic Tac Toe!" << endl << "One or Two Players?: ";
	cin >> numPlayerOption;
	
	if (numPlayerOption == 1) {
		numPlayerOption = 2;
	}
	if (numPlayerOption == 2) {
		cout << "Player 1 will be " << playerOne << " 's" << endl;
		cout << "Player 2 will be " << playerTwo << " 's" << endl;
		cout << boardGraphic;

		while (!gameEnd) {

			if (previousTurn == 1) {
				cout << "It is Player 2's turn" << endl;
				cout << "Enter position to place an \"O\": ";
				cin >> placeIndex;
				boardGraphic.find(placeIndex);
				while (boardGraphic.find(placeIndex) == string::npos) {
					cout << "Invalid option." << endl << "Enter new position: " << endl;
					cin >> placeIndex;
					
				}
			}
			else if (previousTurn == 2) {

			}
		}
	}
	else {
		cout << "Invalid option stupid." << endl;
	}

	system("pause");
	return 0;
}