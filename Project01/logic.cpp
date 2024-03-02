int sum_nonzero(int* vector, int length) {
	int sum = 0;

	for (int i = 0; i < length; i++)
	{
		if (*(vector + i) != 0) {
			sum += *(vector + i);
		}
	}

	return sum;
}

double count_nonzero(int* vector, int length) {
	double count = 0;

	for (int i = 0; i < length; i++)
	{
		if (*(vector + i) != 0) {
			count++;
		}
	}

	return count;
}

double arithmetic_avg(int sum, double count) {
	return sum / count;
}

int max_element(int* vector, int length){
	int max = *vector;

	for (int i = 1; i < length; i++)
	{
		if (*(vector + i) > max) {
			max = *(vector + i);
		}
	}

	return max;
}

int min_element(int* vector, int length) {
	int min = *vector;

	for (int i = 1; i < length; i++)
	{
		if (*(vector + i) < min) {
			min = *(vector + i);
		}
	}

	return min;
}

int sum_without_min_max(int* vector, int length, int min, int max) {
	int sum = 0;

	for (int i = 0; i < length; i++)
	{
		if (*(vector + i) != min && *(vector + i) != max) {
			sum += *(vector + i);
		}
	}

	return sum;
}

double count_without_min_max(int* vector, int length, int min, int max) {
	double count = 0;

	for (int i = 0; i < length; i++)
	{
		if (*(vector + i) != min && *(vector + i) != max) {
			count++;
		}
	}

	return count;
}

bool is_the_same(int* vector, int length) {
	bool flag = false;

	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (*(vector + i) == *(vector + j)) {
				flag = true;
			}
		}
	}

	return flag;
}