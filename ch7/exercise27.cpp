#include <iostream>
#include <cstdlib>
#include "Screen.h"

using std::cout;

int exercise27()
{
	Screen myScreen(5, 5, 'x');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";

	return EXIT_SUCCESS;
}
