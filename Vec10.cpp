#include <math.h>
#include "Vec10.h"

Vec10::Vec10()
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

Vec10::~Vec10()
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

void Vec10::normalaize()
{
	if (size == 0) {
		cout << "[Vec10 is empty]" << endl;
		return;
	}

	int sum = 0;

	for (int i = 0; i < size; i += 1)
	{
		sum += abs(data[i]);
	}

	cout << "Result: " << sqrt(sum) << endl;

}

void Vec10::fill()
{
	 
	for (int i = 0; i < 10; i++)
	{
		int number;
		cout << "Enter number " << (i + 1) << ": ";
		cin >> number;

		data[i] = number;
	}

	size = 10;
}

void Vec10::print()
{
	if (size == 0) {
		cout << "[Vec10 is empty]" << endl;
		return;
	}

	cout << "[";

	for (int i = 0; i < size; i++)
	{
		if (i) cout << ", ";
		cout << data[i];
	}

	cout << "]" << endl;
}