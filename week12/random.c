//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//double Uniform2() {
//    return ((double)rand() / RAND_MAX - 0.5);
//}
//
//int main() {
//    srand(time(NULL));
//    FILE* fp;
//
//    int freq[101] = { 0 };
//    int i;
//    double rv, pdf;
//    for (i = 0; i < 1000000; i++) {
//        rv = 4.0 * Uniform2(); 
//        freq[(int)((rv + 2.0) / 0.04)]++;
//    }
//    fp = fopen("output.csv", "w");
//    for (i = 0; i < 100; i++) {
//        fprintf(fp,"%2.2f, %2.2f, ", -2.0 + i * 0.04, -2.0 + (i + 1) * 0.04);
//        fprintf(fp,"%f, %f\n", (double)freq[i] / 1000000.0, (double)freq[i] / (1000000.0 * 0.04));
//    }
//
//    return 0;
//}
