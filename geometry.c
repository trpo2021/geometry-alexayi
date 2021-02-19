#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char stroka[],ch;
	int counter, radius, cords;
	int i = 0;

	while ((ch = getchar()) != '\n') {
		stroka[i] = putchar(ch);
		++i;
		if (stroka[i] != ' ')
			++counter;
	}
	if ((stroka[0] == 'c') and (stroka[1] == 'i') and (stroka[2] == 'r') and
			(stroka[2] == 'c') and (stroka[3] == 'l') and 
			(stroka[4] == 'e')) {
		if (stroka[5] == ' ') {
			i = 6;
			while (stroka[i] == ' ';) {
				stroka[i] = '';
				i++;
			}
		if (stroka[i] == '(') 
			i++;
		while (isdigit(stroka[i]) != 0) {
			xcords = stroka[i];

