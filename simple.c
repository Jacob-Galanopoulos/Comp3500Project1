#include <stdio.h>
#include <math.h>

int getSum(int arr[]) {
	double sum = 0;
	int i = 0;
	for (i; i < 10; i++) {
		sum += sqrt(arr[i]);
	}

	return sum;
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	double sum = getSum(arr);
	printf("Square root of array is %lf", (sum / 10));
}
