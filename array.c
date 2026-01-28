#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Insert elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array in reverse order
    printf("Array in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
