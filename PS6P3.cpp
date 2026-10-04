#include <iostream>
using namespace std;

int main()
{
	//define variables
	float tix;
	string lcode;
	float pptix,total;



		//input
	cout << "enter the quantity of tickets";
	cin >> tix;
	cout << "enter the location of the event(H or L)";
		cin >> lcode;

	//process
	//determine the cost per ticket based on ticket quantity and location
	if (tix > 25 || lcode == "H")
		pptix = 30.00;
	else if (tix >= 10 || lcode == "L")
		pptix = 40.00;
	else //in the event of the user choosing less than 10 or a different location code
		pptix = 50.00;

		//compute total price for the tickets
	total = tix * pptix;

		//print results

	cout << " the number of tickets ordered : " << tix << endl;
	cout << "the cost per ticket is : $" << pptix << endl;
	cout << "the final total for all tickets is : $ " << total << endl;
	return 0;
}
