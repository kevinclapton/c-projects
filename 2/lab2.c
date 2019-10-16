#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_LEN 1024

void pr(char string[]);
char* inp_str(char* string; int maxlen);

int main(int argc, char **argv) {
	int s;
	printf("Введите количесто строк: ");
	scanf("%d%*c", &s);
	char** strs = NULL;
	strs = (char**)malloc(sizeof(char)*s);
	char buf[MAX_LEN];
	for (unsigned i=0; i<s; i++) {
		printf("Строка %d:", i+1);
		fgets(buf, MAX_LEN, stdin);
		fflush(stdin);
		strs[i] = malloc(sizeof(char)*strlen(buf));
		strcpy(strs[i], buf);
	}
	for (unsigned i=0; i<s; i++)
		pr(strs[i]);
	free(strs);
	return 0;
}

void pr(char string[]) {
	printf("%s", string);
}

char* inp_str(char* string; int maxlen) {
	
}
