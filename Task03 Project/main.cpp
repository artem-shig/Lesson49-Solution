#include "util.h"
#include "logic.h"

int main() {
	int matrix[BUF][BUF];

	int size;
	cout << "Enter size of square matrix: ";
	cin >> size;

	rand_init(matrix, size, 0, 9);
	cout << "Matrix: \n" << convert(matrix, size) << endl;
	cout << "Sum elements of main diadonale: "
		<< sum_elements_of_main_diagonale(matrix, size) << endl;

	cout << "Sum elements of addition diadonale: "
		<< sum_elements_of_addition_diagonale(matrix, size) << endl;

	return 0;
}