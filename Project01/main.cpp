#include <iostream>
using namespace std;

void random_init(int* vector, int size, int min, int max);
string output(int* vector, int size);

int sum_nonzero(int* vector, int length);
double count_nonzero(int* vector, int length);
double arithmetic_avg(int sum, double count);

int min_element(int* vector, int length);
int max_element(int* vector, int length);
int sum_without_min_max(int* vector, int length, int min, int max);
double count_without_min_max(int* vector, int length, int min, int max);

int main() {
	int size = 10;
	int* vector = new int[size];

	random_init(vector, size, 0, 9);

	int min = min_element(vector, size);
	int max = max_element(vector, size);

	int sum = sum_without_min_max(vector, size, min, max);
	int count = count_without_min_max(vector, size, min, max);

	cout << "Vector:\n" << output(vector, size) << endl;
	cout << "Avg arithmetic of elements without min and max: " << arithmetic_avg(sum, count);

	return 0;
}