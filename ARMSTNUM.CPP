#include <iostream.h>
#include <math.h>
#include <conio.h>

class Armstrong
{
    public:
    Armstrong()
    {
	displayArmstrongNumbers();
    }

private:
    void displayArmstrongNumbers() {
	for (int num = 1; num <= 1000; num++) {
	    int sum = 0, temp = num, digits = 0;

	    // Count the number of digits
	    while (temp != 0) {
		temp /= 10;
		digits++;
	    }

	    temp = num; // Reset temp to original number

	    // Calculate the sum of the digits raised to the power of the number of digits
	    while (temp != 0) {
		int digit = temp % 10;

		sum += pow(digit, digits);
		temp /= 10;
	    }

	    // Check if the number is an Armstrong number
	    if (sum == num) {
		cout << num << " ";
	    }
	}
	cout<<endl;
    }
};

void main()
{
    Armstrong armstrongNumbers; // Constructor is called here
}