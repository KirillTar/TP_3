#pragma once

#include <iostream>
#include <fstream>

#include "Vectors.h"

using namespace std;

class Vec10 : public Vectors
{
public:
	Vec10();
	~Vec10();

	void print() override;
	void normalaize() override;
	void fill() override;

private:
	int *data;
	int size = 0;
	string fileName = "_Vec10.txt";
};


