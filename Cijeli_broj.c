#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int poljeA[10];
	int poljeB[10];
	int i, k=0;

	for (i = 0; i < 10; i++) {
		printf("Ucitajte cijeli broj:\n");
		scanf("%d", &poljeA[i]);
	}

	for (i = 0; i < 10; i++) {

		if (*(poljeA + i) % 2 == 0) {

			*(poljeB + k) = *(poljeA + i);
			k++;

		}	
	}

	printf("Clanovi polja A su:\n");
	for (i = 0; i < 10; i++) printf("%d ", *(poljeA + i));
	printf("\n");

	printf("Clanovi polja B su:\n");
	for (i = 0; i < k; i++) printf("%d ", *(poljeB + i));
	printf("\n");


	system("pause");

	return 0;




}
