#include <stdio.h>
 
int main()
{
    int T, S, i, A, B, C, Sub;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d%d%d", &S, &A, &B, &C);
        Sub = S - (A+B+C);
        printf("%d\n", Sub);

    }

    return 0;
}