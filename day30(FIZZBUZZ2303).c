#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read the number of players for this test case
        int result = N * (N - 1); // Calculate the possible choices of captain and vice-captain
        printf("%d\n", result); // Output the result for this test case
    }

    return 0;
}