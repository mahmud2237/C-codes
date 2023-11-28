#include<stdio.h>
int main()
{
    int i, j, n, m;
    printf("Enter row n: ");
    scanf("%d", &n);
    printf("Enter column m: ");
    scanf("%d", &m);
    for(i=0; i<n; i++)
    {
        //print * here
        for(j=0; j<m; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}