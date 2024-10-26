#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        scanf("%d", &N);  // Read number of spooky days
        int full_weeks = N / 7;  // Number of full weeks in N days
        int extra_days = N % 7;  // Remaining days after full weeks

        // Dracula will enjoy his favorite meal on each Tuesday in the full weeks
        int tuesdays = full_weeks;

        // Check if there's an extra Tuesday in the remaining days (days after Monday)
        if (extra_days >= 2) {
            tuesdays++;
        }

        printf("%d\n", tuesdays);
    }

    return 0;
}

