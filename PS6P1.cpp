#include <iostream>
using namespace std;

int main()
{
	//define variables
	float qty;
	string status;
	float price, exprice, tax, total;



		//input
	cout << "enter the quantity of widgets";
		cin >> qty;
		cout << "enter the status value of the customer";
		cin >> status;

	//process
	//determine the price based on quantity and status
	if (qty > 10000 && status == "A")
		price = 10.00;
	else if (qty > 10000 && status == "B")
		price = 12.00;
	else if (qty >= 5000 && status == "C")
		price = 20.00;
	else if (qty >= 5000 && status == "D")
		price = 22.00;
	else
		price = 30.00;
		//calculate the extended price
	exprice = qty * price;

		//compute tax from a 7% value
	tax = exprice * 0.07;

		//compute total
	total = tax + exprice;

		//print results

	cout << "the extended price for the widgets is estimated at: $" << exprice << endl;
	cout << "based on a 7 % tax rate, the tax amount is estimated at: $" << tax << endl;
	cout << "the final total for the widget order is: $" << total << endl;
	return 0;
}
