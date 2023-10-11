#include <iostream>

using namespace std;

////Programming Exercise 2.7.1:
////Output my name and my address:
//int main(void)
//{
//	cout << "My name is C++(スマイル))." << endl;
//	cout << "My address is 0x080001(スマイル))." << endl;
//	return 0;
//}



////Programming Exercise 2.7.2 
////Unit convert:
//int main(void)
//{
//	//Unit long:
//	int l = 0;
//	cout << "Input long." << endl;
//	cin >> l;
//	cout << l << " long is " << l * 220 << " yard." << endl;
//	return 0;
//}


////Programming Exercise 2.7.3:
////Define functions:
//void blind(void);	//Function prototype
//void they(void);
//int main(void)
//{
//	blind();
//	blind();
//	they();
//	they();
//	return 0;
//}
//
//void blind(void)
//{
//	cout << "Three blind mice" << endl;
//}
//
//void they(void)
//{
//	cout << "See how they run" << endl;
//}


////Programming Exercise 2.7.4:
////Convert the age to month:
//int main(void)
//{
//	int age = 0;
//	cout << "Enter your age ";
//	cin >> age;
//	cout << "Your age equal to " << age * 12 << " month." << endl;
//	return 0;
//}

////Programming Exercise 2.7.5:
////Convert centigrade to Fahrenheit:
//int convert(int centigrade);
//int main(void)
//{
//	int centigrade = 0;
//	cout << "Please enter a Celsius value: ";
//	cin >> centigrade;
//	int num = convert(centigrade);
//	cout << centigrade << " degress is " << num << " degress Fahreheit." << endl;
//	return 0;
//}
//
//int convert(int centigrade)
//{
//	return 1.8 * centigrade + 32.0;
//}

////Programming Exercise 2.7.6:
////Convert light years to astronmical units:
//int convert(int light_years);
//int main(void)
//{
//	double light_years = 0;
//	cout << "Please enter the number of light years: ";
//	cin >> light_years;
//	int num = convert(light_years);
//	cout << light_years << " light years = " << num << " astronomical units." << endl;
//	return 0;
//}
//
//int convert(int light_years)
//{
//	return light_years * 63240;
//}


//Programming Exercise 2.7.7:
//Convert hours and minutes to the type of "hours: minutes":
void time(int hours, int minutes);
int main(void)
{
	int hours = 0;
	int minutes = 0;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	time(hours, minutes);
	return 0;
}

void time(int hours, int minutes)
{
	cout << "Time: " << hours << ":" << minutes << endl;
}