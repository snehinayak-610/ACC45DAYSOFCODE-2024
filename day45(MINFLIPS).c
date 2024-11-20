#include <stdio.h>
#include <stdlib.h>

int min_operations(int n, int *arr) {
    int sum = 0, count_1 = 0, count_neg1 = 0;

    // Calculate initial sum and counts of 1 and -1
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] == 1) count_1++;
        else count_neg1++;
    }

    // If the sum is odd, it's impossible to make it 0
    if (abs(sum) % 2 != 0) {
        return -1;
    }

    // Calculate the target sum
    int target = sum / 2;

    // To balance the sum, we need to flip |target| number of elements
    int flips_needed = abs(target);

    // Check if we have enough elements to flip
    if (flips_needed > count_1 && flips_needed > count_neg1) {
        return -1;
    }

    return flips_needed;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int result = min_operations(n, arr);
        printf("%d\n", result);
    }

    return 0;
}