#include <stdio.h>

int main() {
	typedef int DISTANCE;
	typedef int type1[10];
	typedef type1 *type2;
	typedef struct {
		int field1;
		type2 field2;
	} type3;
	typedef type3 type4[5];

	type4 a;
	*(a[0].field2)[2];
}
