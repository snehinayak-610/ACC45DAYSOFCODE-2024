#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, A, B; // Number of episodes, even duration, odd duration
        scanf("%d %d %d", &N, &A, &B);
        
        int totalDuration = 0;
        
        for (int i = 1; i <= N; i++) {
            if (i % 2 == 0) {
                totalDuration += A; // Even-indexed episodes
            } else {
                totalDuration += B; // Odd-indexed episodes
            }
        }
        
        printf("%d\n", totalDuration);
    }
    
    return 0;
}