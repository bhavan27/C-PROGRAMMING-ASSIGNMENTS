#include <stdio.h>

int main() {
    int a[50], b[50], arr[100];
    int n1, n2, i, j, k;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array:\n");
    for(j = 0; j < n2; j++) {
        scanf("%d", &b[j]);
    }

    i = j = k = 0;

    while(i < n1 && j < n2) {
        if(a[i] < b[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
        }
    }

    while(i < n1) {
        arr[k++] = a[i++];
    }

    while(j < n2) {
        arr[k++] = b[j++];
    }

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}