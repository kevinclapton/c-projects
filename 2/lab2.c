#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_LEN 1024

char* inp_str(char* string, int maxlen);
void pr(char* string);

int main(int argc, char **argv) {
	int s;
	int* s1 = &s;
	printf("Введите количесто строк: ");
	scanf("%d", s1);
	int const S = s;
	char* strs[S];
	char buf[MAX_LEN];
	printf("Введите %d строк.\n", S);
	for (int i=0; i<S; i++) {
		printf("Строка %d:", i+1);
		fgets(string, maxlen, stdin);
		strcpy(inp_str(buf, MAX_LEN), strs[i]);
	}
	for (int i=0; i<S; i++);
		pr(*strs[i]);
	return 0;
}

char* inp_str(char* string[], int maxlen) {
	fgets(string, maxlen, stdin);
	fflush(stdin);
	return string;
	}

void pr(char* string) {
	printf("%s\n", string);
	}
