// Lab_04_5.cpp
// <Матвіїв Владислав>
// Лабораторна робота № 4.5
// "Попадання" у плоску фігуру
// Варіант 8

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, y, R;

	srand((unsigned) time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;

		if ((x * x) + (y * y) <= (R * R) && (y >= -x) && (y <= x))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	cout << endl << fixed;

	for (int i = 0; i < 10; i++);
	{
		x = 6. * rand() / RAND_MAX - 3;
		y = 6. * rand() / RAND_MAX - 3;

		if ((x * x) + (y * y) <= (R * R) && (y >= -x) && (y <= x))
			cout << setw(8) << setprecision(4) << x << "   "
			<< setw(8) << setprecision(4) << y << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << "   "
			<< setw(8) << setprecision(4) << y << "no" << endl;
	}

	return 0;
}