#include <stdio.h>
#include <math.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);

        // Calculate the total number of rounds
        int total_rounds = log2(N);

        // Total time = (A * total_rounds) + (B * (total_rounds - 1))
        // The last round has no break, so (total_rounds - 1) breaks are considered
        int total_time = (A * total_rounds) + (B * (total_rounds - 1));

        printf("%d\n", total_time);
    }

    return 0;
}