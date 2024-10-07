// 15.WAP to print the Fibonacci series
#include <stdio.h>

int main() {
    int num, i;
    int t1 = 0, t2 = 1, nextTerm;

    // taking user input
    printf("Enter a natural number: ");
    scanf("%d", &num);

    // printing the first two terms
    printf("Fibonacci Series: %d, %d", t1, t2);

    // finding fibonacci series
    for (i = 1; i <= num - 2; i++) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");

    return 0;
}
