#include<stdio.h>
int main() {
    int n, i;
    int arr[100], sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    printf("Sum of even elements: %d\n", sum);

    return 0;
}