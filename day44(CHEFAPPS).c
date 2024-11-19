#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int S, X, Y, Z;
        scanf("%d %d %d %d", &S, &X, &Y, &Z);
        
        // Calculate the remaining free space on the phone
        int freeSpace = S - (X + Y);
        
        if (freeSpace >= Z) {
            // Enough space is already available
            printf("0\n");
        } else if ((freeSpace + X) >= Z || (freeSpace + Y) >= Z) {
            // Deleting one app (X or Y) creates enough space
            printf("1\n");
        } else {
            // Both apps need to be deleted
            printf("2\n");
        }
    }
    
    return 0;
}