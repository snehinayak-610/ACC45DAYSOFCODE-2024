#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while(T--) {
        int N, X;
        scanf("%d %d", &N, &X);
        
        // The number of face-down cards is N - X
        int face_down = N - X;
        
        // The minimum flips needed is the smaller of face-up or face-down cards
        int min_flips = (X < face_down) ? X : face_down;
        
        printf("%d\n", min_flips);
    }
    
    return 0;
}
