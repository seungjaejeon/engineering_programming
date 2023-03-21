#include<stdio.h>
#include<string.h>
void main() {
	char sentence[80] = {0};
	int alphabet_small[26] = { 0 };
	int alphabet_big[26] = { 0 };
	gets(sentence);
	for (int i = 0; i < strlen(sentence); i++) {
		if (sentence[i] >= 65 && sentence[i] <= 90) {
			alphabet_big[sentence[i]-65]++;
		}
		if (sentence[i] >= 97 && sentence[i] <= 122) {
			alphabet_small[sentence[i]-97]++;
		}
	}
	for (int i = 0; i < 26; i++) 
	{
		for (int j = 0; j < alphabet_small[i]; j++) {
			printf("%c ", i + 97);
		}
		for (int j = 0; j < alphabet_big[i]; j++) {
			printf("%c ", i + 65);
		}
	}
}