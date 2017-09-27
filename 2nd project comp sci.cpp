/* Heading 
GuhaSwaminathan - 9/25/17 2nd Period

Assignment Name : Take in Data

Display Data, Accept User Response, Displayed Changed Data

*/

// Libraries
#include <iostream> //* gives access to cin, cout, end1, <<, >>, boolalpha, noboolalpha
#include <conio.h> //* gives access to _kbhit() and _getch() for pause()

// Namespace
using namespace std; 

// Function()
Void pause() {
	cout << "Press Any Key to Continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN 
void main() {
	// Variables
	int dice_rolled_count;
	char choice_answer;
	// set bool to false and assume they didn't choose 'A'
	bool answersMatcheds = false; // did they get the same answer as you on number 2
	double piGuess;

	int calc_1, calc_2, calc_3, calc_4, calc_5; // hold int values for calculation

	// User Queries
	cout << "How many rolls will it take a die to land on a \"number\" : ";
	cin >> dice_rolled_count;
	cout << "What answer did you get for number 2 (a/b/c/d) : ";
	cin >> choice_answer;
	if (choice_answer == 'a' || choice_answer == 'A') {
		answersMatcheds = true; // only set to true if choice answer was 'a' or 'A'
	}
	cout << "What is pi : ";
	cin >> piGuess;

	cout << "Give me 3 random whole numbers : " << "\n";
	cout << "Number 1 : ";
	cin >> calc_1;
	cout << "Number 2 : ";
	cin >> calc_2;
	cout << "Number 3 :";
	cin >> calc_3;

	// After questions print out stored data
	cout << "I think you are correct, " << dice_rolled_count << " 4 rolls and a number will appear. \n";
	cout << boolalpha << "I think that is " << answerMatcheds << " for question 2." << end1; // ENDL different ways to go to newline
	cout << "So you think pi is : " << piGuess << '\n';// another new way


	// Do some calculations
	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << end1; // you can do the math as output
	calc_4 = calc_2 * calc_3; // storing first
	cout << calc_2 << " * " << calc_3 << " = " << calc_4 << "\n";

	// Pause
	pause();

}