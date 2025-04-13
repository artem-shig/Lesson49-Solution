#include "util.h"
#include "logic.h"

int main() {
	int matrix[BUF][BUF];

	int size;
	cout << "Enter size of square matrix: ";
	cin >> size;

	rand_init(matrix, size, 0, 0);
	change_matrix(matrix, size);
	cout << "Phofagor table : \n" << convert(matrix, size) << endl;
	



	return 0;
}