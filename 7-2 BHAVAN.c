#include <stdio.h>

int main(){
    int a[50], n, i, key, pos=-1;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(a[i]==key){
            pos=i+1;
            break;
        }
    }

    if(pos!=-1)
        printf("Element found at %d position",pos);
    else
        printf("Element not found");

    return 0;
}