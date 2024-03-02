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

bool is_the_same(int* vector, int length);

int main() {
	int size = 5;
	int* vector = new int[size];

	random_init(vector, size, 0, 9);

	string same = is_the_same(vector, size) ? "There are same elements"
		: "There is no same elements";

	cout << "Vector:\n" << output(vector, size) << endl;
	cout << same;

	return 0;
}