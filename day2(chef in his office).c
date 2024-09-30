#include <stdio.h>

int main() {
    int T, X, Y, total_hours;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        
        scanf("%d %d", &X, &Y);

        total_hours = 4 * X + Y;

        printf("%d\n", total_hours);
    }

    return 0;
}