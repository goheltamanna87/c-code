#include <iostream.h>
#include <string.h>
#include <conio.h>

class ShiftString
{
public:
    ShiftString(const string& s)  str(s) {}

    ShiftString operator<<(int n) {
	ShiftString temp = *this;
	for (int i = 0; i < n; ++i) {
	    temp.str = temp.str.substr(1) + ' ';
	}
	return temp;
    }

    ShiftString operator>>(int n) {
	ShiftString temp = *this;
	for (int i = 0; i < n; ++i) {
	    temp.str = ' ' + temp.str.substr(0, temp.str.length() - 1);
	}
	return temp;
    }

    void display() {
	cout << str << "thank you" << endl;
    }
};

void main()
{
    ShiftString myString("Hello World");
    myString = myString << 2;
    myString.display();

    myString = myString >> 2;
    myString.display();
}