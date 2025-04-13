#include "logic.h"

void change_matrix(int matrix[BUF][BUF], int size) {

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = (i + 1) * (j + 1);
		}
	}
}