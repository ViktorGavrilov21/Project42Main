#include "logic.h"

int main() {
	//int array[]{ 9, 1, 2, 3, 4, 5, 6, 7, 8 };
	//int size = 9;
	int array[DEFAULT_SIZE];
	int size;

	cout << "Input size: ";
	cin >> size;

	init(array, size, 0, 10);

	print("Array: ");
	print(convert(array, size) + "\n");

	print("Duplicates: " + find_duplicates(array, size) + "\n");


	return 0;
}