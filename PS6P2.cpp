#include <iostream>
using namespace std;

int main()
{
	//define variables
	float qty, ptnum;
	float cpu, total;



		//input
		cout << "enter the quantity of parts";
		cin >> qty;
		cout << "enter the part number given(10, 99, 55, 70, 50)";
		cin >> ptnum;

	//process
	//determine the cost per unit based on quantity and number
		if ( qty > 1000 && ptnum == 10)
			cpu = 1.00;
		else if (qty > 500 && ptnum == 99)
			cpu = 2.00;
		else
			cpu = 5.00;

		//compute total
		total = cpu * qty;

		//print results

		cout << "part number entered :" << ptnum << endl;
		cout << "the cost per unit is : $" << cpu << endl;
		cout << "the final total for the part order is : $" << total << endl;
	return 0;
}
