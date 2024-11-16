#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        long long N; // Number of gifts needed
        scanf("%lld", &N);

        // Calculate the number of gifts Chef actually pays for
        long long giftsPaid = (N / 5) * 4 + (N % 5);

        // Each gift costs 1 coin
        long long coinsRequired = giftsPaid;

        printf("%lld\n", coinsRequired);
    }

    return 0;
}