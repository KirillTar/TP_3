#include <math.h>
#include "ÑomplexNumbers.h"

ÑomplexNumbers::ÑomplexNumbers()
{

	ifstream fin(fileName);

	fin >> size;

	data = (int *)malloc(size * sizeof(int));

	for (int i = 0; i < size; i++)
	{
		fin >> data[i];
	}

	fin.close();
}

ÑomplexNumbers::~ÑomplexNumbers()
{
	ofstream fin(fileName);

	fin << size;
	fin << endl;

	for (int i = 0; i < size; i++) {
		fin << data[i];
		fin << endl;
	}

	fin.close();

	delete[] data;
}

void ÑomplexNumbers::print()
{
	if (size == 0) {
		cout << "[ÑomplexNumbers is empty]" << endl;
		return;
	}

	for (int i = 0; i < size; i += 2)
	{
		int a = data[i];
		int b = data[i + 1];

		cout << "z = " << a << " + " << b << "i" << endl;
	}

	cout << endl;
}

void ÑomplexNumbers::normalaize()
{
	if (size == 0) {
		cout << "[ÑomplexNumbers is empty]" << endl;
		return;
	}

	for (int i = 0; i < size; i += 2)
	{
		int a = data[i];
		int b = data[i + 1];

		cout << "z = " << a << " + " << b << "i; r = " << sqrt(a * a + b * b) << endl;
	}
}

void ÑomplexNumbers::fill()
{
	int amount;

	cout << "Enter comlex amount: ";
	cin >> amount;
	size = amount * 2;

	delete data;
	
	data = (int *)malloc(size * sizeof(int));

	for (int i = 0; i < size; i+=2)
	{
		int a;
		int b;

		cout << "Enter a: ";
		cin >> a;

		cout << "Enter b: ";
		cin >> b;

		data[i] = a;
		data[i+1] = b;

	}
}
