#include<iostream.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
	return a / b;
    } else {
	cout << "Error: Division by zero!"<<endl;
	return 0;
    }
}

void main() {
    int num1 = 10;
    int num2 = 5;

    cout << "Addition: " << add(num1, num2)<<endl;
    cout << "Subtraction: " << subtract(num1, num2)<<endl;
    cout << "Multiplication: " << multiply(num1, num2) << endl;
    cout << "Division: " << divide(num1, num2) <<endl;
}