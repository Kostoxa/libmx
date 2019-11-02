#include <stdio.h>
int mx_quicksort_int(int *arr, int left, int right) {
	int pivot = (right - left) / 2 + left;
	int b;
    int i;
    int j;
	int count = 0;
	int newL = left;
	int newR = right;

	while (newL <= newR) {
		for (i = left; i <= right; i++) {
			if (arr[i] > arr[pivot] || i == pivot) {
				newL = i;
				break;
			}
		}
    	for (j = right; j >= left; j--) {
        	if (arr[j] < arr[pivot] || j == pivot) {
            	newR = j;
				break;
			}
    	}
		if (i == pivot && newR != pivot) {
			newL = i;
			pivot = newR;
		}
        else if (j == pivot && newL != pivot) {
			newR = j;
            pivot = newL;
        }
		if (newL != newR) {
			b = arr[newL];
			arr[newL] = arr[newR];
			arr[newR] = b;
			count++;
		}
        newL++;
		newR--;
	}
	newL = pivot + 1;
	newR = pivot - 1;
	if (left < newR)
		count = count + mx_quicksort_int(arr, left, newR);
	if (newL < right)
		count = count + mx_quicksort_int(arr, newL, right);
	return count;
}



int main() {
    int arr[] =  {13, 10, 8, 7, 13, 10, 8, 7};

    printf("%i\n",mx_quicksort_int(arr, 0, 7));
    for (int k = 0; k < 8; k++) {
        printf("%i ", arr[k]);
	}
return 0;
}
