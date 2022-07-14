#include<iostream>
using namespace std;
int power(int, int);
int main()
{
	int base, exp;
	cout << "Enter the Base : " ;
	cin >> base;
	cout << "Enter the Exponent : " ;
	cin >> exp;
	cout<<"Power is "<<power(base, exp)<<endl;
}
int power(int base, int exp)
{
	int power=1;
	for (int i = 0; i < exp; i++)
	{
		power = power*base;
	}
	return power;
}