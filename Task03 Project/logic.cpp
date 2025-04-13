#include "logic.h"

int sum_elements_of_main_diagonale(int matrix[BUF][BUF], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += matrix[i][i];
	}

	return sum;
}

int sum_elements_of_addition_diagonale(int matrix[BUF][BUF], int size) {
	int sum = 0;
	int i = 0;
	int j = size - 1;

	while (i < size) {
		sum += matrix[i][j];
		i++;
		j--;
	}
	//drygoi sposob resheniua
	return sum;
}