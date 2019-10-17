#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 128

void inp_str(char*** string, unsigned s) {
	if((*string = (char**)malloc(s*sizeof(char*))) == 0)
		exit(1);
	char buf[MAXLEN];
	for(int i=0; i<s; i++) {
		printf("Введите строку №%d: ", i+1);
		fgets(buf, MAXLEN, stdin);
		fflush(stdin);
		if ((*string[i] = (char*)malloc(strlen(buf)*sizeof(char))) == 0)
			exit(2);
		strcpy(*string[i],buf);
	}
}

void out_strs(char*** string, unsigned s) {
	for(int i=0; i<s; i++)
		printf("Строка %d: %s\n", i+1, *string[i]);
}

void free_strs(char*** string, unsigned s) {
	for(int i=0; i<s; i++)
		free(*string[i]);
	free(*string);
}

int main(int argc, char** argv) {
	unsigned s;
	printf("Введите количество строк: ");
	scanf("%u%*c", &s);
	char** string = NULL;
	inp_str(&string, s);
	out_strs(&string, s);
	free_strs(&string, s);
	return 0;
}
