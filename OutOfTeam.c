#include<stdio.h>
int main()
{
    int N, K, i, run, count=0;
    scanf("%d%d", &N, &K);
    for(i=1; i<=N; i++)
    {
        scanf("%d", &run);
        if(run<K)
        {
            count++;     
        }         
    }  
    printf("%d\n", count); 
    return 0;   
}