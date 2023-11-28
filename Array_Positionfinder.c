#include<stdio.h>
int main()
{
    int N,x;
    int ara[200001];
    int i;
    scanf("%d", &N);

    for(i=0;i<N;i++)
    {
        ara[i] = 0; //for all N's value 0
    }
    for(i=1; i<N; i++)
    {
        scanf("%d", &x);
        ara[x] = 1;
    }
    
    for(i=1; i<=N; i++)
    {
        printf("Testing %d position\n", i);
        if(ara[i]==0)
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
    
}