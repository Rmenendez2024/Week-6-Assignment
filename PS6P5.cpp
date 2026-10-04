#include <iostream>
using namespace std;

int main()
{
	//define variables
	float hrs;
	string jcode;
	float prate, gross;



		//input
	cout << "enter the hours worked excluding overtime";
		cin >> hrs;
		cout << "enter the job code(L, J, or A)";
		cin >> jcode;

	//process
	//determine the price based on time and equipment code
		if (jcode == "L" && hrs > 40)
			prate = 50.00;
		else if (jcode == "L" && hrs <= 40)
			prate = 40.00;
		else if (jcode == "J" && hrs > 60)
			prate = 100.00;
		else if (jcode == "J" && hrs <= 60)
			prate = 75.00;
		else if (jcode == "A" && hrs > 40)
			prate = 25.00;
		else if (jcode == "A" && hrs <= 40)
			prate = 20.00;

		//compute gross pay excluding overtime
		gross = prate * hrs;

		//print results

		cout << "the job code given : " << jcode << endl;
		cout << "the hours worked excluding overtime: " << hrs << endl;
		cout << "the gross payment based on this combination: $" << gross << endl;
	return 0;
}
