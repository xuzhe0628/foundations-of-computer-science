#include <stdio.h>

void selection_sort(int A[], int n) {
	int i, j, small, temp;
	for (i=0;i<n-1;i++) {
		small = i;
		for(j=i+1;j<n;j++) {
			if (A[j] < A[small]) {
				small = j;
			}
		}
		temp = A[small];
		A[small] = A[i];
		A[i] = temp;
	}
}

int main() {
	int n = 5;
	int A[5] = {8,2,3,2,9};
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d\n", A[i]);
	}
	selection_sort(A, n);
	for (i = 0; i < 5; i++) {
		printf("%d\n", A[i]);
	}
}
