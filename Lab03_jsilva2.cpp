// Lab03_jsilva2.cpp 
//Jacob Silva
//10/1/2018
//COSC 2030	

#include "stdafx.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

short shortSum(short n)
{
	short count = 0;
	short sum = 0;
	while (count <= n)
	{
		sum = sum + count;
		count++;
	}
	if (sum < 0)
	{
		cout << "Overflow detected at value: " << n;
	
	}
	return sum;
}

long longSum(long n)
{
	long count = 0;
	long sum = 0;
	while (count <= n)
	{
		sum = sum + count;
		count++;
	}
	if (sum < 0)
	{
		cout << "Overflow detected at value: " << n;

	}
	return sum;
}

float factorial(float val)
{
	long count = 1;
	float product= 1;
	while (count <= val)
	{
		product = product* count;
		count++;
	}
	if (product < 0)
	{
		cout << "Overflow detected at value: " << val;

	}
	return product;
	
}

double doubleFactorial(float val)
{
	long count = 1;
	double product = 1;
	while (count <= val)
	{
		product = product * count;
		count++;
	}
	if (product < 0)
	{
		cout << "Overflow detected at value: " << val;

	}
	return product;

}

float function6(float n)
{
	float count = 1;
	float sum = 0;
	double ratio = 1/n;
	while (count <= n)
	{
		sum = sum +ratio;
		count++;
	}
	sum = sum - 1;
	return sum;
}


	
int main()
{
	int n;
	cout << "Please enter a value for n : ";
	cin >> n;
	cout<<endl<< "The short sum is : " << shortSum(n)<<endl;
	cout << endl << "The long sum is : " << longSum(n) << endl;
	cout << endl << "The factorial is : " << factorial(n) << endl;
	cout << endl << "The factorial is : " << doubleFactorial(n) << endl;
	cout << endl << "The expected value is : " << function6(n) << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	return 0;
}

