#include <stdio.h>

int main() {
    int n, t;
    printf("Enter NUMBERS to store in ARRAY:\n");
    scanf("%d", &n);
    int arr[n];
   for (int i = 0; i < n; i++) {
        printf("n%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0){
		arr[i] = 0;}
        else{
		arr[i] = 1;}
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("Output: [");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}

