#include <stdio.h>

int main() {
    int a[10][10], i, j, r, c;
    int sum = 0;
    float avg;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
            sum = sum + a[i][j];
        }
    }

    avg = (float)sum / (r*c);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}