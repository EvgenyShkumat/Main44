#include <iostream>
using namespace std;

void random_init(int* vector, int size, int min, int max);
string output(int* vector, int size);

int sum_nonzero(int* vector, int length);
double count_nonzero(int* vector, int length);
double arithmetic_avg_nonzero(int sum, double count);

int main() {
	int size = 10;
	int* vector = new int[size];

	random_init(vector, size, 0, 9);

	int sum = sum_nonzero(vector, size);
	double count = count_nonzero(vector, size);

	cout << "Vector:\n" << output(vector, size) << endl;
	cout << "Avg arithmetic of non-zero elements: " <<
		arithmetic_avg_nonzero(sum, count);

	return 0;
}