#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	int a;
	cout << "¬ведiть число\n";
	cin >> a;
	if (a % 2 == 0)
		cout << "„исло  парне";
	else
		cout << "„исло непарне";
}