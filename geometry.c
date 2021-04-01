#include <stdio.h>
#include <string.h>
#include <ctype.h>
void ERROR(int TOF) 
{
	if (TOF == 0) {
		printf("data entry error");
		exit(0);
	}
}
int main() {
	char line[1000],ch, xcords[100], ycords[100];
	int counter, radius;
	int i = 0, j = 0, TOF = 0;

	while ((ch = getchar()) != '\n') {
		line[i] = tolower(ch);
		++i;
		if (line[i] != 32)
			++counter;
	}
	
	i = 0;
	int count = 0;

	while (isalpha(line[i] == 0)) {
		i++;
		count++;
	}
	
	// 32 - Пробел, 99 - c, 105 - i, 114 - r, 108 - l, 101 - e, 40 - (, 41 - ), 44 - , По ASCII таблице 
	i = count - 1;
	if (line[i] == 99) { 
		if ((line[i+1] == 105) && (line[i+2] == 114) && (line[i+3] == 99) && (line[i+4] == 108) && (line[i+5] == 101)) {
			TOF = 1;
			i+=6;
			while (line[i] == 32) 
				i++;
			if (line[i] == 40) {
				i++;
				while (isdigit(line[i]) != 0) {
			
					xcords[j] = line[i];
					
					putchar(xcords[j]);
					j++;
					i++;		
				}
				while (isalpha(line[i] == 32)) 
					i++;
				if ((line[i] != 32) && (line[i] != 44)) {
					TOF = 0;
					ERROR(TOF);	
				}
				if (line[i] == 44)	{
					i+=1;
					while (isdigit(line[i]) != 0) {
						ycords[j] = line[i];
						putchar(ycords[j]);
						j++;
						i++;		
					}
				}							
			}
		}
	if (TOF == 0) 
		ERROR(TOF);		
	}
	for (int k = count; k < (count + 6);k++) {
		ch = line[k];
		puts(ch);	
	}
	return 0;
}
