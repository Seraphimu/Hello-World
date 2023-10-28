#include <iostream>

using namespace std;

int main(void) {
	int a = 114;
	int& na = a;

	cout << "当前的a = " << a << endl;
	cout << "当前的na = " << na << endl;

	a = 514;
	cout << "改变a后的a = " << a << endl;
	cout << "改变a后的na = " << na << endl;

	na = 114514;
	cout << "改变na后的a = " << a << endl;
	cout << "改变na后的na = " << na << endl;

	//对引用解引用
	*&na = 1919810;
	cout << "改变*&na后的a = " << a << endl;
	cout << "改变*&na后的na = " << na << endl;

	return 0;
}