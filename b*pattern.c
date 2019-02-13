#include <stdio.h>
void main() {
	int i,j,k,d=0;
	for (i=5; i>=1; i--) {
		for (k=d; k>0; k--) {
			printf("b");
			// only 1 space
		}
		for (j=i; j>=1; j--) {
			printf("*");
		}
		d = d + 1;
		printf("\n");
	}
}
