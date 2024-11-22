#include <stdio.h>

// Function to calculate f(N) and g(N)
void calculate_divisors(int N, int *even_divisors, int *odd_divisors) {
    *even_divisors = 0;
    *odd_divisors = 0;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            if (i % 2 == 0) {
                (*even_divisors)++;
            } else {
                (*odd_divisors)++;
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Input N for each test case

        int even_divisors = 0, odd_divisors = 0;
        calculate_divisors(N, &even_divisors, &odd_divisors);

        if (even_divisors > odd_divisors) {
            printf("1\n");
        } else if (even_divisors == odd_divisors) {
            printf("0\n");
        } else {
            printf("-1\n");
        }
    }

    return 0;
}