#include<iostream.h>
void main()
{
    int month;
   char* monthName;

   cout << "Enter the month number (1-12): ";
    cin >> month;

    switch (month)
    {
	case 1:
	    monthName = "January";
	    cout << monthName << " has cold weather.";
	    break;
	case 2:
	    monthName = "February";
	    cout << monthName << " has chilly weather.";
	    break;
	case 3:
	    monthName = "March";
	    cout << monthName << " has mild weather.";
	    break;
	case 4:
	    monthName = "April";
	    cout << monthName << " has blooming flowers.";
	    break;
	case 5:
	    monthName = "May";
	    cout << monthName << " has spring showers.";
	    break;
	case 6:
	    monthName = "June";
	    cout << monthName << " has warm days.";
	    break;
	case 7:
	    monthName = "July";
	    cout << monthName << " has hot weather.";
	    break;
	case 8:
	    monthName = "August";
	    cout << monthName << " has summer heat.";
	    break;
	case 9:
	    monthName = "September";
	    cout << monthName << " has autumn breeze.";
	    break;
	case 10:
	    monthName = "October";
	    cout << monthName << " has falling leaves.";
	    break;
	case 11:
	    monthName = "November";
	    cout << monthName << " has cool winds.";
	    break;
	case 12:
	    monthName = "December";
	    cout << monthName << " has festive spirit.";
	    break;
	default:
	    cout << "Invalid month number!";
	    break;
    }
}