#include <stdio.h>
#include <string.h>

int main() {
    char A[101], B[101];

    printf("Masukkan string A: ");
    scanf("%s", A);
    printf("Masukkan string B: ");
    scanf("%s", B);

    int lenA = strlen(A);
    int lenB = strlen(B);

    if (lenA != lenB) {
        printf("BERBEDA\n");
    } else {
       
        if (strcmp(A, B) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }

    return 0;
}
