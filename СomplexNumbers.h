#pragma once

#include <iostream>
#include <fstream>

#include "Vectors.h"

using namespace std;

class ÑomplexNumbers: public Vectors
{
public:
	ÑomplexNumbers();
	~ÑomplexNumbers();

	void print() override;
	void normalaize() override;
	void fill() override;

private:
	int *data;
	int size = 0;
	string fileName = "_ComplexNumbers.txt";
};