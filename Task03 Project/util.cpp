#include "util.h"

string convert(int matrix[BUF][BUF], int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			s += to_string(matrix[i][j]) + "\t";
		}
		s += "\n";
	}

	return s;
}

void rand_init(int matrix[BUF][BUF], int size, int a, int b) {

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = rand() % (b - a + 1) + a;
		}
	}
}

void user_init(int matrix[BUF][BUF], int size) {

	cout << "Input matrix (" << BUF << "x" << BUF << ") elements:\n";

	for (int i = 0; i < size; i++)
	{
		cout << "[" << i + 1 << "]: ";
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}
	}
}
