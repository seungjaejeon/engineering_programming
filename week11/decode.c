#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main(int argc, char* argv[]) {
    char file_in[80], file_out[80], sentence[MAX];
    unsigned char dec[MAX];
    sprintf(file_in, "%s.bin", argv[1]);
    sprintf(file_out, "%s.res", argv[1]);

    FILE* fin = fopen(file_in, "rb");
    FILE* fout = fopen(file_out, "w");

    size_t file_size = fread(dec, sizeof(char), MAX, fin);
    fclose(fin);

    for (int i = 0; i < file_size; i++) {
        char parity_bit = dec[i] & 0x01;
        dec[i] = dec[i] >> 1;    
        dec[i] = dec[i] & 0x7f;  
    }

    fprintf(fout, "%s", dec);
    fclose(fout);
    return 0;
}
