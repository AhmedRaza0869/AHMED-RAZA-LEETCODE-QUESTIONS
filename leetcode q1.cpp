#include <stdio.h>

int main() {
    int n;
    printf("HOW MANY NUMBERS TO STORE IN ARRAY\n");
    scanf("%d", &n);

    int arr[n], runningsum = 0;
    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("n%ld: ", i + 1);
        scanf("%ld", &arr[i]);
    }

    printf("OUTPUT: [");
    for (int i = 0; i < n; i++) {
        runningsum += arr[i];
        printf("%ld", runningsum);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}

