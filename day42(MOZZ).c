#include <stdio.h>

void solve() {
    int T;
    scanf("%d", &T); // Number of test cases
    
    while (T--) {
        int X, Y, R;
        scanf("%d %d %d", &X, &Y, &R);
        
        // Calculate the extra mozzarella sticks Chef ate
        int extra_sticks = R / 30;
        
        // Total mozzarella sticks Chef ate
        int total_sticks = X + extra_sticks;
        
        // Calculate the maximum number of plates
        int max_plates = total_sticks / Y;
        if (total_sticks % Y != 0) {
            max_plates++;
        }
        
        printf("%d\n", max_plates);
    }
}

int main() {
    solve();
    return 0;
}