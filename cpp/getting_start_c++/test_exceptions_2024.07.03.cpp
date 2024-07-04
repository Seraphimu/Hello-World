#include <iostream>

using namespace std;

int main(void) {

    int age;
    cout << "Input your age: " << endl;
    cin >> age;
    try {
        if (age >= 18) {
            cout << "Access granted - you are old enough." << endl;;
        }
        else {
            throw(age);
            throw("Error\n");
        }
    }
    catch (...){
        cout << "Access denied - You must be at least 18 years old.\n";
    }
//    catch (...){
//        cout << "Access denied - You must be at least 18 years old.\n";
//    }
    
//    catch (int myNum){
//        cout << "Access denied - You must be at least 18 years old.\n";
//        cout << "Age is: " << myNum << endl;
    
    return 0;
}
