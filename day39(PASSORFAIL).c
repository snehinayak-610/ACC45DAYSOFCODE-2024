#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X, P;
        scanf("%d %d %d", &N, &X, &P);

        // Calculate the score based on correct and incorrect answers
        int score = (X * 3) + ((N - X) * -1);

        // Check if the score meets or exceeds the passing mark
        if (score >= P) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }

    return 0;
}