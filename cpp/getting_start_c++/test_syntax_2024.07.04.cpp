#include <iostream>
#include <string>
using namespace std;

void goodVariableName() {
    //Good
    int minutesPerHour = 60;
    //OK, but not so easy to understand what m actually is.
    int m = 60;
}

void testConstChange() {
    const int HOMO = 114514;

    //OK
    const int & rHOMO = HOMO;
    cout << rHOMO << endl;
    //Error: Read-Only
    // rHOMO = 1919810;

    //The type is not const, can not pointer to HOMO
    // int * pHOMO = &HOMO;
    //Const type is read-only
    // const int * pHOMO = &HOMO;
    // *pHOMO = 1919810;
}

void testString() {
    string chicken = "鸡你";
    string beautiful = "太美";
    cout << chicken + beautiful << endl;
    cout << chicken.append(beautiful) << endl;

    string txt = "ABCDEFG";
    cout << txt.size() << endl;
    cout << txt.length() << endl;

    string str = "Hello";
    cout << str[0] << endl;
    cout << str[str.length() - 1] << endl;

    // str[0] = 'h';
    // cout << str << endl;
    cout << str.at(0) << endl;
    cout << str.at(1) << endl;
    cout << str << endl;
    str.at(0) = 'h';
    cout << str << endl;
}

void testEnum() {
    typedef enum Level {
        LOW,
        MEDIUM = 114514,
        HIGH
    }Level;

    Level myLevel = HIGH;

    switch(myLevel) {
        case LOW:
            cout << "Low" << endl;
            break;
        case MEDIUM:
            cout << "Medium" << endl;
            break;
        case HIGH:
            cout << "High" << endl;
            break;
        default:
            cout << "What ??" << endl;
            break;
    }


    // cout << LOW << endl;        //Outputs 0
    // cout << MEDIUM << endl;     //Outputs 114514
    // cout << HIGH << endl;       //Outputs 114515
    //
    //
    // enum Level myLevel;
    // myLevel = HIGH;
    //
    // cout << myLevel << endl;
}

int main(void) {
    // testConstChange();
    // testString();
    testEnum();

    return 0;
}
