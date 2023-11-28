#include <stdio.h>
int main()
{
    int N;          
    int ara[100];
    int i;
    scanf("%d", &N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &ara[i]);
    }

    int even_count= 0, odd_count = 0;
    for(i=0; i<N; i++)
    {
        if(ara[i]%2==0)
        even_count++;
        else
        odd_count++;
    }
    printf("No. of evens = %d\n", even_count);
    printf("No. of odds = %d\n", odd_count);

    return 0;
    
}