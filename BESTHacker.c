#include<stdio.h>
int main()
{
    int N, K, i, j, Run, count=0;
    scanf("%d%d", &N, &K);
    for(i=1; i<=N; i++)
    {
        scanf("%d", &j);
        while(j!=K)  
        {    
            count++; 
            printf("%d", count);
        }  
    }   
    return 0;
}