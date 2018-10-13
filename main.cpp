#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	const int DIMENSIONS = 3;
	char myBoard[DIMENSIONS][DIMENSIONS];
	int numPlayerOption = 2;
	char playerOne = 'X';
	char playerTwo = 'O';
	char initialValue = '_';
	//string boardGraphic = "|11|12|13|\n|21|22|23|\n|31|32|33|\n";
	int previousTurn = 1;
	bool gameEnd = false;
	int placeIndexRow;
	int placeIndexColumn;
	int placeIndexPosition;
	int i;
	int j;

	cout << "Welcome to Tic Tac Toe!" << endl << "One or Two Players?: ";
	cin >> numPlayerOption;
	
	if (numPlayerOption == 1) {
		numPlayerOption = 2;
	}
	if (numPlayerOption == 2) {
		cout << "Player 1 will be " << playerOne << " 's" << endl;
		cout << "Player 2 will be " << playerTwo << " 's" << endl;
		cout << "Current Board:" << endl;
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				myBoard[i][j] = initialValue;
				cout << myBoard[i][j];
			}
			cout << endl;
		}
	
		previousTurn = rand() % 2 + 1;
		
		while (!gameEnd) {

			if (previousTurn == 1) {
				cout << "It is Player 2's turn" << endl;
				cout << "Enter row to place an \"O\": ";
				cin >> placeIndexRow;
				cout << endl;
				cout << "Enter column to place an \"X\": ";
				cin >> placeIndexColumn;
				cout << endl;
				while (placeIndexColumn == 0/*is not valid*/) {
					cout << "Position not valid" << endl;
				}
				myBoard[placeIndexRow - 1][placeIndexColumn - 1] = playerTwo;
				previousTurn = 2;
				cout << "Current Board:" << endl;
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 3; j++) {
						cout << myBoard[i][j];
					}
					cout << endl;
				}
			}
			else if (previousTurn == 2) {
				cout << "It is Player 2's turn" << endl;
				cout << "Enter row to place an \"O\": ";
				cin >> placeIndexRow;
				cout << endl;
				cout << "Enter column to place an \"X\": ";
				cin >> placeIndexColumn;
				cout << endl;
				while (placeIndexColumn == 0/*is not valid*/) {
					cout << "Position not valid" << endl;
				}
				myBoard[placeIndexRow - 1][placeIndexColumn - 1] = playerTwo;
				previousTurn = 2;
				cout << "Current Board:" << endl;
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 3; j++) {
						cout << myBoard[i][j];
					}
					cout << endl;
				}
			}
			/*for (i = 0; i < boardGraphic.size(); i++) {
				if (false) {
					gameEnd = true;
				}
			}*/
			


		}
	}
	
	system("pause");
	return 0;
}