#include <iostream>

int main(void)
{
	using namespace std;
	int carrots = 0;
	cout << "How many carrots do you have?" << endl;
	//C++ input:
	cin >> carrots;
	cout << "Here are 2 more. ";
	carrots = carrots + 2;
	//Output you have how many carrots(concatenates):
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}