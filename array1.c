#include<stdio.h>
int main()
{
    int i, N;
    printf("Enter N's value: ");
    scanf("%d", &N);
    int arr[N];
    for(i=1; i<=N; i++)
    {
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nElements in array are: ");
    for(i=1; i<=N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}