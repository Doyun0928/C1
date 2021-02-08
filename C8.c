#include <stdio.h>

main() {
	int i;
	int sum = 0;
	int a[] = { 1,2,3,4,5 };

	for (i = 0; i < 5; i++) {
		sum += a[i];
	}
	printf("배열 요소의 전체 합은 %d\n", sum);
}