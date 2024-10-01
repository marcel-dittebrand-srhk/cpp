#include <iostream>	// Include header for input / output functionalities
#include <string>	// Include header for strings

/*

	Use the namespace std for standard functionalities of iostream.
	This makes statements for console shorter:

	std::cout	is	cout
	std::cin	is	cin

*/

using namespace std; 					

// Entry point

int main() {

   
	int number1, number2;   		// Variables for user-entered numbers to use in calculation
	string txt = "";				// Variable to store a string
	string chosenOperator;			// Variables for user-entered string to store the operator

	cout << "Calculator\n\n";		// Title of the program

	cout << "Operator[+ , -, *, /, ^2]: "; cin >> chosenOperator; cout << "\n"; // Get the operation

	cout << "Number 1: ";  cin >> number1;	// Get the first number
	cout << "Number 2: ";  cin >> number2;  // Get the second number

	cout << "\n";	// Print out a new line

	// Check if the user-chosen operator is ^2 for a squaring

	if (chosenOperator == "^2") {

		// If the user-chosen operator is ^2 for a squaring, then execute this code:

		string chosenNumber;		// 	Variable to store a user-entered string for the
									//	number which should be squared

		cout << "Number[1, 2]: "; cin >> chosenNumber; cout << "\n";	// Get the chosen number
																		// for selection as string

		// Check if the user-chosen number for selection is 1

		if (chosenNumber == "1") {

			// If the user-chosen number for selesction is 1

			cout << number1 << " ^2 " << " = ";			// Print out the calculation with the user input
														// (Optional to clearify the calculation)
			cout << number1 * number1; cout << "\n";	// Square the first number
														// and print out the results
		}

		// Check if the user-chosen number for selection is 2

		if (chosenNumber == "2") {

			// If the user-chosen number for selection is 2

			cout << number2 << " ^ 2" << " = ";			// Print out the calculation with the user input
														// (Optional to clearify the calculation)
			cout << number2 * number2; cout << "\n";	// Square the second number
														// and print out the results
		}

	}

	// Check if the user-chosen operator is + for a addition

	if (chosenOperator == "+") {

		// If the user-chosen operator is + for a addition, then execute this code:

		cout << number1 << " + " << number2 << " = ";	// Print out the calculation with the user input
														// (Optional to clearify the calculation)
		cout << number1 + number2; cout << "\n";		// Add the numbers
														// and print out the results

	}

	// Check if the user-chosen operator is - for a subtraction

	if (chosenOperator == "-") {

		// If the user-chosen operator is - for a subtraction, then execute this code:

		cout << number1 << " - " << number2 << " = ";	// Print out the calculation with the user input
														// (Optional to clearify the calculation)
		cout << number1 - number2; cout << "\n";		// Subtract the second number from the first
														// and print out the results
	}

	// Check if the user-chosen operator is * for a multiplication

	if (chosenOperator == "*") {

		// If the user-chosen operator is * for a multiplication

		cout << number1 << " * " << number2 << " = ";	// Print out the calculation with the user input
														// (Optional to clearify the calculation)
		cout << number1 * number2; cout << "\n";		// Multiply the numbers
														// and print out the results
	}

	// Check if the user-chosen operator is / for a division

	if (chosenOperator == "/" ) {

		// If the user-chosen operator is / for a division

		cout << number1 << " / " << number2 << " = ";	// Print out the calculation with the user input
														// (Optional to clearify the calculation
		cout << number1 / number2; cout << "\n";		// Divide the first number from the second
														// and print out the results
	}


    /*
	 Wait until the user presses a key.
	 Alternative: 	You can use system("pause") and remove the variable txt afterwards
	*/

	cin >> txt;

	return 0;

}