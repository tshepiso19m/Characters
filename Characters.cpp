// Characters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main() {
	char Grade;


	cout << " Enter your grade " << endl;
	cin >> Grade;

	switch (Grade) {
	case 'A':
	case 'a':
		cout << " You got more than 90 ";
		break;

	case 'B':
	case 'b':
		cout << " You got between 60 and 89 ";
		break;

	case 'C':
	case 'c':
		cout << " You got between 50 and 59 ";
		break;

	default:
		cout << " Enter alphabet characters ";



	}

	return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
