#include<stdio.h>
int main()
{
    int i, j;
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);
    for(j=1; j<=N; j++)
    {
        printf("#");
    }
    printf("\n");
    for(i=1; i<=(N-2); i++)
    {
        printf("#");
        for(j=1; j<=(N-2); j++)
        {
            printf(" ");
        }
        printf("#\n");
    }
    for(j=1; j<=N; j++)
    {
        printf("#");
    }
    printf("\n");
    return 0;
}