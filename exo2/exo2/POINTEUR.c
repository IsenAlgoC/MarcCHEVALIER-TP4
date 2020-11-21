#include <stdio.h>
#include <stdlib.h>
#define SEPARATEUR '/' 
#define TAILLETAB1 20

main() {

	int MyTab1[TAILLETAB1];
	int* MyPtr1;
	MyPtr1 = &MyTab1[TAILLETAB1];


	for (int i = 0; i < TAILLETAB1; i++) {

		MyTab1[i] = i + 1;
		printf("%d  %c  ", MyTab1[i], SEPARATEUR);
	}

	printf("\n\n");

	for (int j = 0; j < TAILLETAB1; j++) {

		MyPtr1--;
		printf("%d  %c  ", *MyPtr1, SEPARATEUR);
	}

	printf("\n\n");

}