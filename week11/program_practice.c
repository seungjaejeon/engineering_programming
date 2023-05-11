//#include <stdio.h> 
//#include <stdlib.h> 
//#include <string.h> 
//#define MAX 100 
//
//
//void main(int argc, char* argv[])
//{
//	int i, j, file_size;
//	char parity_bit, file[80], sentence[MAX];
//	unsigned char enc[MAX];
//	FILE* fpt;
//	if (argc != 2) {
//		printf(" main [input file (____.txt)] \n");
//		exit(1);
//	}
//	sprintf(file, "%s.txt", argv[1]);
//	fpt = fopen(file, "r");
//	if (fpt == NULL) exit(1);
//
//	fgets(sentence, MAX, fpt);
//	fclose(fpt);
//	file_size = strlen(sentence) + 1;
//	for (i = 0; i < file_size; i++) {
//		parity_bit = 0x00;
//		for (j = 0; j < 7; j++) parity_bit += ((sentence[i] >> j) & 0x01);
//
//		if ((parity_bit % 2) == 0) parity_bit = 0x01;
//		else parity_bit = 0x00;
//
//		enc[i] = (sentence[i] << 1) | parity_bit;
//	}
//
//	sprintf(file, "%s.bin", argv[1]);
//	fpt = fopen(file, "wb");
//
//	fwrite(enc, sizeof(char), file_size, fpt);
//
//	fclose(fpt);
//}