#include <iostream>
using namespace std;

int main()
{
	//define variables
	string time, ecode;
	float rcost;



	//input
	cout << "enter the equipment code";
	cin >> ecode;
	cout << "enter the time code for rental(H or F)";
	cin >> time;

	//process
	//determine the price based on time and equipment code
	if (ecode == "A" && time == "F")
		rcost = 10.00;
	else if (ecode == "A" && time == "H")
		rcost = 15.00;
	else if (ecode == "B" && time == "F")
		rcost = 20.00;
	else if (ecode == "B" && time == "H")
		rcost = 35.00;
	else if (ecode == "C" && time == "H")
		rcost = 40.00;
	else if (ecode == "C" && time == "F")
		rcost = 45.00;
	else
		rcost = 50.00;


	//print results

	cout << " the equipment code given is :" << ecode << endl;
	cout << "the time code for rental is" << time << endl;
	cout << "the rental cost given is : $" << rcost << endl;
	return 0;
}