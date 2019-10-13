#include <stdlib.h>
#include <stdio.h>
#define MAX_LEN 1024

int main(int argc, char **argv) {
	/*int s=1;
	printf("Введите количество строк: ");
	scanf("%d", &s);
	const int S = s;*/
	char buf[MAX_LEN];
	printf("Строка №1: ");
	fgets(buf, MAX_LEN, stdin);
	fflush(stdin);
	printf("Вот строка: %s\n", buf);
	return 0;
}
