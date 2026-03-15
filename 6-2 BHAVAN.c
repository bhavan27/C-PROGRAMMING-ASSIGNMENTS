#include <stdio.h>

int main(){
    int a[50], n, i;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Reverse Array:\n");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);

    return 0;
}