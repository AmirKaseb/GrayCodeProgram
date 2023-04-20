#include <stdio.h>

unsigned int binaryToGray (unsigned int num) {
    return num^(num>>1);
}

void printGrayCode (int n ) {

    int totalCombinations= 1<<n;
    printf("Gray Code Combinations:\n");
    for (int i=0; i<totalCombinations;i++) {
        unsigned int grayCode = binaryToGray(i);
        unsigned int *grayCodePtr = &grayCode;
        for (int j= n -1;j>=0;j--) {
            int bit =(*grayCodePtr>>j)&1;
            printf("%d",bit);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the number of bits pls:");
    scanf("%d",&n);
    printGrayCode(n);
    return 0;
}
