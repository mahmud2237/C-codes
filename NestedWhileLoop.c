#include<stdio.h>
int main()
{
    int i, j, n, m;
    printf("Enter row n: ");
    scanf("%d", &n);
    printf("Enter column m: ");
    scanf("%d", &m);
    i = 0;
    while(i<n)
    {
        //print * here
        j = 0; 
        while(j<m)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}