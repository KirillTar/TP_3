#pragma once

#include <iostream>
#include <fstream>

#include "Vectors.h"

using namespace std;

class Matrix4x4 : public Vectors
{
public:
	Matrix4x4();
	~Matrix4x4();

	void print() override;
	void normalaize() override;
	void fill() override;

private:
	int *data;
	int size = 0;
	string fileName = "_matrix4x4.txt";
}; 
