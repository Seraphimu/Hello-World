#include <iostream>

//Function prototype for simon():
void simon(int n);

int main(void)
{
	using namespace std;
	//Call the simon() function:
	simon(3);
	cout << "Pick an integer: ";
	int count = 0;
	cin >> count;
	//Call the simon() again:
	simon(count);
	cout << "Done!" << endl;
	return 0;
}

//Define the simon function:
void simon(int n)
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
	//Void functions don't need return statements:
}