#include <iostream>

//Function prototype:
int stonetolb(int sts);

int main(void)
{
	using namespace std;
	int stone = 0;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	//Call stonetolb function:
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	return 0;
}
int stonetolb(int sts)
{
	return 14 * sts;
}