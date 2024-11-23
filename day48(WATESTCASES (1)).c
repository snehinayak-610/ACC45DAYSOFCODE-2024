 #include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Number of test cases for the problem

        int S[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &S[i]); // Sizes of test cases
        }

        char V[N + 1]; // Binary string
        scanf("%s", V);

        int min_size = 101; // As 1 ≤ S[i] ≤ 100, initialize with a value greater than max S[i]

        for (int i = 0; i < N; i++) {
            if (V[i] == '0') { // Test case failed
                if (S[i] < min_size) {
                    min_size = S[i];
                }
            }
        }

        printf("%d\n", min_size); // Output the smallest test case size where it failed
    }

    return 0;
}