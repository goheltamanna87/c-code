#include<iostream.h>
#include<conio.h>
class SimpleInterest
{
private:
    float principal;
    float rate;
    float time;
    float interest;

public:
    SimpleInterest(float p, float r, float t) {
	principal = p;
	rate = r;
	time = t;
	interest = (principal * rate * time) / 100;
    }

    void show()
    {
	cout << "Principal: " << principal << endl;
	cout << "Rate: " << rate << "%" << endl;
	cout << "Time: " << time << " years" << endl;
	cout << "Simple Interest: " << interest << endl;
    }
};

void main()
{
    float principal, rate, time;

    cout << "Enter Principal Amount: ";
    cin >> principal;
    cout << "Enter Rate of Interest: ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;

    SimpleInterest si(principal, rate, time);
    si.show();
}
