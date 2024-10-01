#include <stdio.h>

int main() {
    int A, B, C, X;
    
    // Reading the four integers A, B, C, and X
    scanf("%d %d %d %d", &A, &B, &C, &X);
    
    // Check if X is equal to A, B, or C
    if (X == A || X == B || X == C) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

