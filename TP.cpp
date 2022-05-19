#include <iostream>
#include <string>
#include <conio.h>

#include "Vectors.h"
#include "СomplexNumbers.h"
#include "Vec10.h"
#include "Matrix4x4.h"

using namespace std;


void ClassLoop(Vectors* vector) {

	int command;

	for (;;) {
		system("@cls||clear");

		vector->print();

		cout << "Enter command number:" << endl;
		cout << "1. Fill" << endl;
		cout << "2. Normalize" << endl;
		cout << "0. Exit to main menu" << endl << endl;

		cout << "Enter command number: ";
		cin >> command;

		system("@cls||clear");

		switch (command)
		{
			case 1:
				vector->fill();
				cout << endl << endl << "Press any key to exit" << endl;
				_getch();
				break;
			case 2:
				vector->normalaize();
				cout << endl << endl << "Press any key to exit" << endl;
				_getch();
				break;
			case 0:
				return;
		}
	}
}



int main()
{
	setlocale(LC_ALL, "Russian");

	Vectors *classes[3] = { new СomplexNumbers(), new Vec10(), new Matrix4x4() };
	
	int typeId;

	for (;;) {
		system("@cls||clear");

		cout << "Enter type number:" << endl;
		cout << "1. Complex Numbers" << endl;
		cout << "2. Vector 10" << endl;
		cout << "3. Matrix 4x4" << endl << endl;
		cout << "0. Exit" << endl << endl;

		cout << "Type: " ;
		cin >> typeId;

		if (typeId >= 1 && typeId <= 3) {
			ClassLoop(classes[typeId-1]);
		}

		if (!typeId) {

			for (int i = 0; i < 3; i++)
			{
				delete classes[i];
			}

			return 0;
		}
		
	}
}

