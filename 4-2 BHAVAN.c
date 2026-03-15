#include <stdio.h>

int main(){
    int a[50], n, i, j, count=0, factor;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        factor=0;
        for(j=1;j<=a[i];j++){
            if(a[i]%j==0)
                factor++;
        }

        if(factor>2)
            count++;
    }

    printf("Number of Composite Numbers = %d",count);

    return 0;
}