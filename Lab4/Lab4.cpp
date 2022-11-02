#include <iostream>
using namespace std;
int main()
{
	double b[10];
	int i;
	cout << "Enter 10 elements\n";
	for (i = 0; i < 10; i++)
		cin >> b[i];
	cout << "Array b consists of the following elements:\n";
	for (i = 0; i < 10; i++)
		cout << "b[" << i << "]=" << b[i] << endl;
	double a[9];
	for (i = 0; i < 9; i++)
		a[i] = ((b[i] + b[i + 1]) / 2);
	cout << "Array a consists of the following elements:\n";
	for (i = 0; i < 9; i++)
		cout << "a[" << i << "]=" << a[i] << endl;
	return 0;


}