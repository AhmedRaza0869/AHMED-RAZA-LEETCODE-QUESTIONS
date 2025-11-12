#include <stdio.h>

int main() {
    int n;
    printf("Enter total number of elements (even number): ");
    scanf("%d", &n);
     if (n % 2 != 0) {
        printf("Enter 2n numbers!!");
        return 0;
    }

    int arr[n], res[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int half = n / 2;
    int j = 0;
    for (int i = 0; i < half; i++) {
        res[j++] = arr[i];        
        res[j++] = arr[i + half]; 
    }

    printf("Output: [");
    for (int i = 0; i < n; i++) {
        printf("%d", res[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}

