#include <stdio.h>
#include <stdlib.h>  // For abs()

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y;  // X is the policeman's initial position, Y is the thief's initial position
        scanf("%d %d", &X, &Y);

        // The minimum time is the absolute difference between the positions of the policeman and the thief
        int time = abs(X - Y);

        // Output the result for this test case
        printf("%d\n", time);
    }

    return 0;
}
