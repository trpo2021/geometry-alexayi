#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void ERROR(int TOF) 
{
	if (TOF == 0) {
		printf("data entry error\n");
		exit(0);
	}
}
int main() {
	char line[1000],ch, xcords[100], ycords[100], radius[100];
	int i = 0, j = 0, TOF = 0, k = 0, x = 0, y = 0, r = 0;

	while ((ch = getchar()) != '\n') {
		line[i] = tolower(ch);
		++i;
	}
	
	i = 0;
	int count = 0;

	while (isalpha(line[i] == 0)) {
		i++;
		count++;
	}
	while (line[i] == 32) {
				i+=1;
				count++;
		}
	// 32 - Пробел, 99 - c, 105 - i, 114 - r, 108 - l, 101 - e, 40 - (, 41 - ), 44 - , По ASCII таблице 
	i = count;
	if (line[i] == 99) { 
		if ((line[i+1] == 105) && (line[i+2] == 114) && (line[i+3] == 99) && (line[i+4] == 108) && (line[i+5] == 101)) {
			TOF = 1;
			i+=6;
			while (line[i] == 32) 
				i++;
			if ((line[i] != 32) && (line[i] != 40)) {
				TOF = 0;
				ERROR(TOF);	
			}
			if (line[i] == 40) {
				i+=1;
				while (line[i] == 32) 
				i+=1;
				while (isdigit(line[i])) {
					xcords[j] = line[i];					
					j++;
					i++;
					x++;		
			}
			while (line[i] == 32)
                                i+=1;
			j = 0;
			while (isdigit(line[i])) {
                                        ycords[j] = line[i];
                                        j++;
                                        i++;
                                        y++;
                        }

			while (line[i] == 32) 
				i+=1;
			if ((line[i] != 32) && (line[i] != 44)) {
				TOF = 0;
				ERROR(TOF);	
			}
			if (line[i] == 44)	{
				i+=1;
				while (line[i] == 32) 
				i+=1;
				if ((line[i] != 32) && (isdigit(line[i]) == 0)) {
					TOF = 0;
					ERROR(TOF);	
				}
				j = 0;
				while (isdigit(line[i])) {
					radius[j] = line[i];
					j++;
					i++;
					r++;		
				}
			}							
		}
	    }
	}
	if (TOF != 0) {
		for (k = count; k < (count + 6);k++)
			putchar(line[k]);
		printf("(");	
		for (k = 0; k < x; k++) 
			putchar(xcords[k]);
		printf(" ");
		for (k = 0; k < y; k++)
                        putchar(ycords[k]);
		printf(", ");
		for (k = 0; k < r; k++) 
			putchar(radius[k]);
		printf(")");
	}
	if (TOF == 0)
                ERROR(TOF);
	return 0;
}
