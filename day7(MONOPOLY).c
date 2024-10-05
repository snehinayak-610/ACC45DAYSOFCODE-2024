#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);

    while (T--) {
        int P, Q, R, S;
        scanf("%d %d %d %d", &P, &Q, &R, &S);

        // Check if any one company has more profit than the sum of the other three
        if (P > Q + R + S || Q > P + R + S || R > P + Q + S || S > P + Q + R) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

