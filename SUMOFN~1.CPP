#include<iostream.h>
#include<conio.h>

class SumArray
{
    private:
    int* arr;
    int size;

public:
    // Default constructor
    SumArray(int n) : size(n) {
	arr = new int[size];
	for (int i = 0; i < size; ++i) {
	    arr[i] = i + 1; // Assigning values 1 to n
	}
    }

    // Method to calculate sum
    int calculateSum() {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
	    sum += arr[i];
	}
	return sum;
    }

    // Destructor to free allocated memory
    ~SumArray() {
	delete[] arr;
    }
};

void main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    SumArray sumArray(n);
    cout << "The sum of the elements is: " << sumArray.calculateSum()<<endl;
}