#include "logic.h"

int sum_raw_elemetnts(int* raw) {
	int sum = 0;

	for (int i = 0; i < M; i++)
	{
		sum += raw[i];
	}

	return sum;
}

int get_raw_with_max_sum_of_elements(int matrix[N][M]) {
	int number = 0;
	int sum = sum_raw_elemetnts(matrix[0]);

	for (int i = 1; i < N; i++)
	{
		int tempSum = sum_raw_elemetnts(matrix[i]);
		if (tempSum > sum) {
			sum = tempSum;
			number = i;
		}
	}

	return number;
}