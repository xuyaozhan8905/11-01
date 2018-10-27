#include<stdio.h>
#include<stdlib.h>

int main(void) {

	char word;
	printf("Please input character(A~Z)¡G");
	scanf_s("%c",&word);
	word = word + 32;
	printf("The last is %c\n", word);
	system("pause");
	return 0;
}