#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char line[],ch, xcords[], ycords[];
	int counter, radius;
	int i = 0, j = 0;

	while ((ch = getchar()) != '\n') {
		line[i] = putchar(ch);
		++i;
		if (line[i] != ' ')
			++counter;
	}
	
	i = 0;

	while (isalpha(line[i] == 0) {
		line[i] = '';
	}
	
	i = 0;
	
	if ((line[i] == 'c') { 
		if (line[i+1] == 'i') and (line[i+2] == 'r') and (line[i+3] == 'c') and (line[i+4] == 'l') and (line[i+5] == 'e')) {
			if (line[5] == ' ') {
				i = 6;
				while (line[i] == ' ';) {
					line[i] = '';
					i++;
				}
				if (line[i] == '(') 
				i++;
				while (isdigit(line[i]) != 0) {
			
					xcords[j] = line[i];
					j++;
					i++;		
				}
			}
		}
	}
	return 0;
}
