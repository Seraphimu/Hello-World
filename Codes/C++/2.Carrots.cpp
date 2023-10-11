#include <iostream>

int main(void)
{
	using namespace std;
	//Declare and assign a value to an integer variable carrots:
	int carrots = 25;
	cout << "I have ";
	//Display the value of the variable carrots:
	cout << carrots;
	cout << "carrots.";
	cout << endl;
	//Modify the variable:
	carrots = carrots - 1;
	cout << "Crunch, crunch. Now I have " << carrots << "carrots." << endl;
	return 0;
}