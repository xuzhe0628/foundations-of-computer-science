#include <stdio.h>

void print_array(int arr[], int n) {
	int i, j;
    for (i = 0; i < n; i++) {
		int repeat = 0;
		for (j = 0; j < i - 1; j++) {
			if (arr[i] == arr[j]) {
				 repeat = 1;
				 break;
			}
		}
		if (repeat == 0) {
			printf("%d\n", arr[i]);
		}
	}
}

int main() {
	int arr[] = {3, 4, 2, 3, 4, 3, 4, 5, 3};
	print_array(arr, 9);
}
