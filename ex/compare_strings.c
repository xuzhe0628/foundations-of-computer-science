#include <stdio.h>

int main(){
	typedef struct CELL *STRING;
	struct CELL {
		char value;
		STRING next;
	};

	struct CELL c1, c2, c3, c4, c5;
	c1.value = 'A';
	c1.next = &c2;
	c2.value = 'C';
	c2.next = NULL;

	c3.value = 'a';
	c3.next = &c4;
	c4.value = 'b';
	c4.next = &c5;
	c5.value = 'c';
	c5.next = NULL;

	STRING s1, s2;
	s1 = &c1;
	s2 = &c3;

	char to_lower(char c) {
		if (c >= 'A' && c <='Z') {
			return c+32;
		}
		else {
			return c;
		}
	}

    printf("%c %c\n", to_lower('C'), to_lower('d'));

	int compare_string(STRING s1, STRING s2) {
		for ( ; ; ) {
			if (to_lower(s1->value) == to_lower(s2->value)) {
				if (s1->next == NULL & s2->next != NULL) {
					return 0;
				}
				else if (s1->next == NULL) {
					return 1;
				}
				else {
					s1 = s1->next;
					s2 = s2->next;
					compare_string(s1, s2);
				}
			}
			else if (to_lower(s1->value) > to_lower(s2->value)) {
				return 1;
			}
			else {
				return 0;
			}
		}
	}
	
	printf("%d\n", compare_string(s1, s2));
}
