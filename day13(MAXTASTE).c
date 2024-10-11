#include <stdio.h>

// Function to calculate the maximum possible tastiness
int max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int a, b, c, d;
        // Reading the tastiness values for the ingredients
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        // Calculating the maximum possible tastiness
        int max_tastiness = max(a, b) + max(c, d);
        
        // Printing the result for each test case
        printf("%d\n", max_tastiness);
    }
    return 0;
}