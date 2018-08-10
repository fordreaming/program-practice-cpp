#include <iostream>
#include "TaxCal.h"

using namespace std;

int main()
{
	TaxCal* taxCalObj = new TaxCal;
	int salary;
	cout << "please input salary:" << endl;
	cin >> salary;
	taxCalObj->CalculateTax(salary);
	cout << "salary after subtract personal tax" << endl;
	return 0;
}