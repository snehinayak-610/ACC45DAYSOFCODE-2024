#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (X < Y) {
            printf("BIKE\n");
        } else if (X > Y) {
            printf("CAR\n");
        } else {
            printf("SAME\n");
        }
    }

    return 0;
}