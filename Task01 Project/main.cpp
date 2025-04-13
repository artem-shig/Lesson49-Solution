#include "util.h"
#include "logic.h"

int main() {
	int matrix[N][M];

	rand_init(matrix, 0, 0);
	cout << "\nMatrix:\n" << convert(matrix) << endl;
	cout << "First raw with max sum of elements: "
		<< get_raw_with_max_sum_of_elements(matrix) + 1 << endl;

	rand_init(matrix, 1, 1);
	cout << "\nMatrix:\n" << convert(matrix) << endl;
	cout << "First raw with max sum of elements: "
		<< get_raw_with_max_sum_of_elements(matrix) + 1 << endl;

	rand_init(matrix, 0, 100);
	cout << "\nMatrix:\n" << convert(matrix) << endl;
	cout << "First raw with max sum of elements: "
		<< get_raw_with_max_sum_of_elements(matrix) + 1 << endl;

	user_init(matrix);
	cout << "\nMatrix:\n" << convert(matrix) << endl;

	return 0;
}