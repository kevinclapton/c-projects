//--- malloc.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
#define MAX_LEN 1024
int main(int argc, char *argv[]) {
	int** arr = NULL;
	int sto, str;
	printf("Введите количество столбцов: ");
	scanf("%d%*c", &sto);
	printf("Введите количество строк: ");
	scanf("%d%*c", &str);
	for (unsigned i=0; i<sto; i++)
		for (unsigned j=0; i<str; i++)
			arr[i][j] = (int **)calloc()
	return 0;
}
