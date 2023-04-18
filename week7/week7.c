#include<stdio.h>
#include <string.h>
#include <math.h> 
#include <stdlib.h>
void decoding();
char data[100];
char file_name[80];
void main(int argc, char* argv[]) {
	
	FILE* fpt;
	if (argc != 2) {
		printf("one mod file please \n");
		exit(1);
	}
	strcpy(file_name, argv[1]);
	strcat(file_name, ".mod");
	fpt = fopen(file_name, "r");
	if (fpt == NULL) {
		printf("Error: cannot open file '%s' for reading\n", file_name);
		exit(1);
	}
	fscanf(fpt, "%s", data);
	fclose(fpt);
	

	strcpy(file_name, argv[1]);
	strcat(file_name, ".org");
	decoding();
}
void decoding() {
	/*FILE* fpt2;
	
	fpt2 = fopen(file_name, "w");
	if (fpt2 == NULL) {
		printf("Error: cannot open file '%s' for writing\n", file_name);
		exit(1);
	}*/
	int count = 0;
	int pastnumber = 0;
	char decodedata[] = "";
	for (int i = 0; i < strlen(data); i++) {
		if ((int)data[i] >= 48 && 57 >= (int)data[i]) {
			if (pastnumber == 1) {
				count = count*10 + (int)data[i] - 48;
			}
			else {
				count = (int)data[i] - 48;
				pastnumber = 1;
			}
		}
		else {
			for (int j = 0; j < count; j++) {
				printf("%c", data[i]);
			}
			count = 0;
			pastnumber = 0;
		}
	}
	/*fclose(fpt2);*/
}
