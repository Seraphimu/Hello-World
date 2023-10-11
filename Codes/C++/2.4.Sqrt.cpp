#include <iostream>
//Include sqrt() function:
#include <cmath>

int main(void)
{
	using namespace std;
	double area = 0;
	cout << "Enter the floor area, in square feet, of your home: ";
	cin >> area;
	double side = sqrt(area);
	cout << "That's the equivalent of a squqre " << side
		<< "feet to the side." << endl;
	cout << "How fascinating!" << endl;
	return 0;
}