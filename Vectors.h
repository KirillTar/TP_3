#pragma once
#include <string> 
#include <iostream>

using namespace std;

class Vectors {
public:
	Vectors();
	virtual ~Vectors() = 0;
	
	virtual void fill() = 0;
	virtual void print() = 0;
	virtual void normalaize() = 0;

private:
	int *data;
	int size = 0;
	string fileName;
};