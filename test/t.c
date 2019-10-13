//--- malloc.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
#define MAX_LEN 1024
int main(int argc, char *argv[]) {
	char** arr = NULL; //Объявление пустого массива указателей на указатели (строки) char*
	arr = (char**)malloc(sizeof(char*)*N); /*Динамическое выделение количества памяти, равного количеству байт,
	занимаемых массивом arr, а также размерности массива*/
	char buf[MAX_LEN];
	for (int i = 0; i < N; i++) {
		arr[i] = (char*)malloc(sizeof(char)*strlen(buf));
		printf("%d: ", i+1);
		fgets(arr[i], MAX_LEN, stdin);
		fflush(stdin);
		strcpy(buf, arr[i]);
	}
	for (int i=0; i < N; i++)
		printf("\n%d: %s", i+1, arr[i]);
	return 0;
}
