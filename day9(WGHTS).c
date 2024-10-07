#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases
    
    while(T--) {
        int W, X, Y, Z;
        scanf("%d %d %d %d", &W, &X, &Y, &Z); // Read the values for W, X, Y, Z
        
        // Check if W can be measured using any combination of X, Y, Z
        if (W == X || W == Y || W == Z || W == (X + Y) || W == (X + Z) || W == (Y + Z) || W == (X + Y + Z)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
