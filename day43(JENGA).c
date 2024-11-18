#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, X;  // Number of people and number of tiles
        scanf("%d %d", &N, &X);

        // Check if the number of tiles is divisible by the number of people
        if (X % N == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}