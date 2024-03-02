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

double arithmetic_avg_nonzero(int sum, double count) {
	return sum / count;
}