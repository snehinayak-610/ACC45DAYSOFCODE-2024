#include <stdio.h>

int main() {
    int T;  // number of test cases
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int N;  // weight of the pulp in kgs
        scanf("%d", &N);
        
        // Calculate how many pages can be made from N kg of pulp
        int pages = N * 1000;
        
        // Each notebook consists of 100 pages
        int notebooks = pages / 100;
        
        // Output the number of notebooks
        printf("%d\n", notebooks);
    }

    return 0;
}
