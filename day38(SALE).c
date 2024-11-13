#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);  // Read prices of three items

        // Calculate the minimum price among A, B, and C
        int minPrice = A;
        if (B < minPrice) minPrice = B;
        if (C < minPrice) minPrice = C;

        // Calculate the total cost after getting the lowest-priced item free
        int totalCost = A + B + C - minPrice;

        printf("%d\n", totalCost);  // Print the result for the current test case
    }

    return 0;
}