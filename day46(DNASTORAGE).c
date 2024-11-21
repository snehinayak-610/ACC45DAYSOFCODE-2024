#include <stdio.h>
#include <string.h>

void encodeBinaryString(int N, char *S) {
    for (int i = 0; i < N; i += 2) {
        if (S[i] == '0' && S[i + 1] == '0') {
            printf("A");
        } else if (S[i] == '0' && S[i + 1] == '1') {
            printf("T");
        } else if (S[i] == '1' && S[i + 1] == '0') {
            printf("C");
        } else if (S[i] == '1' && S[i + 1] == '1') {
            printf("G");
        }
    }
    printf("\n");
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        
        char S[N + 1]; // To store the binary string
        scanf("%s", S);

        encodeBinaryString(N, S);
    }

    return 0;
}