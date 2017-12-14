#include <stdio.h>

int main() {
    typedef struct {
	    int studentID;
	    char *name;
	    char grade;
    } STUDENT;

	STUDENT s1, s2, s3;
	STUDENT *sp[3];
	s1.studentID = 32;
	s2.studentID = 21;
	s3.studentID = 120;
	STUDENT S[] = {s1, s2, s3};
    int n = 3;
	int i, j, small;
	STUDENT *temp;
	for (i = 0; i < n; i++) {
		printf("%d\n", S[i].studentID);
		sp[i] = &S[i];
	}
	for (i = 0; i < n-1; i++) {
		small = i;
		for (j = i + 1; j < n; j++) {
			if (S[j].studentID < S[small].studentID) {
				small = j;
			}
		}
		temp = sp[small];
		sp[small] = sp[i];
		sp[i] = temp; 
	}
	for (i = 0; i < n; i++) {
		printf("%d\n", (*sp[i]).studentID);
	}
}
