#include <iostream>
using namespace std;
void main()
{
	int a, b, c, z, y;
	float x;
	cout << "Input the number:";
	cin >> a;
	cout << "Input the number:";
	cin >> b;
	cout << "Input the number:";
	cin >> c;
	z = a + c - b;
	y = b - a + c;
	x = a * b / c;
	cout << "a+c-b=" << z << endl;
	cout << "b-a+c=" << y << endl;
	cout << "a*b/c=" << x << endl;
}