#include <iostream.h>
#include <string.h>

struct Student {
   public:
   char *name;
    int mathScore;
    int physicsScore;
    int chemistryScore;
};

void main()
{
    Student students[5];

    for (int i = 0; i < 5; ++i)
    {
	cout << "Enter student " << i + 1 << " name: ";
	cin >> students[i].name;

	cout << "Enter math score: ";
	cin >> students[i].mathScore;

	cout << "Enter physics score: ";
	cin >> students[i].physicsScore;

	cout << "Enter chemistry score: ";
	cin >> students[i].chemistryScore;
	cout << endl;
    }

    // Displaying the marksheets
    for (i = 0; i < 5; ++i)
    {
	cout << "Student: " << students[i].name << endl;
	cout << "Math Score: " << students[i].mathScore << endl;
	cout << "Physics Score: " << students[i].physicsScore << endl;
	cout << "Chemistry Score: " << students[i].chemistryScore << endl;
	cout << endl;
    }

}



