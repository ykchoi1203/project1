#include <stdio.h>

void MaxMin(int *arr, int **maxPtr, int **minPtr) {
	int *max, *min;

	max = min = &arr[0];

	for (int a = 0; a < 4; a++) {
		if (*max < arr[a]) {
			max = &arr[a];
		}
		if (*min > arr[a]) {
			min = &arr[a];
		}
	}
	*maxPtr = max;
	*minPtr = min;


}


int main(void)
{
	int *maxPtr;
	int *minPtr;
	int arr[5] = { 5,7,2,4,3 };

	MaxMin(arr, &maxPtr, &minPtr);
	printf("max : %d min : %d", *maxPtr, *minPtr);

	return 0;
}
