#include "util.h"

string convert(int matrix[N][M]) {
	string s = "";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			s += to_string(matrix[i][j]) + " ";
		}
		s += "\n";
	}

	return s;
}

void rand_init(int matrix[N][M], int a, int b) {

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = rand() % (b - a + 1) + a;
		}
	}
}

void user_init(int matrix[N][M]) {

	cout << "Input matrix (" << N << "x" << M << ") elements:\n";

	for (int i = 0; i < N; i++)
	{
		cout << "[" << i + 1 << "]: ";
		for (int j = 0; j < M; j++)
		{
			cin >> matrix[i][j];
		}
	}
}
