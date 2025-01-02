#include <iostream.h>

int main() {
    int num1, num2;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter an arithmetic operator (+, -, *, /): ";
    cin >> op;

    int result;
    int* resultPtr = &result;

    switch(op) {
	case '+':
	    *resultPtr = num1 + num2;
	    break;
	case '-':
	    *resultPtr = num1 - num2;
	    break;
	case '*':
	    *resultPtr = num1 * num2;
	    break;
	case '/':
	    *resultPtr = num1 / num2;
	    break;
	default:
	    cout << "Invalid operator!";
	    return 1;
    }

    cout << "Result: " << *resultPtr <<endl;
    return 0;
}