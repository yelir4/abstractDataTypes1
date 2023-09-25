#include<stdio.h>

// random text file 11/17/21

int main() {
	int i = 4;
	int *j;
	*j = i;
	i = 5;
	
	printf("%i\n", i);
	printf("%i, %p\n", *j, j);
	return 0;
}
