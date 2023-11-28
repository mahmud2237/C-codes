#include<stdio.h>
int main()
{
    int t, n, i, count;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        count=0;
        if(n==1)
        {
            count=1;
        }
        for(int j=2; j<n; j++)
        {
            if(n%j==0)
            {
                count++; 
                break;
            } 
        } 
        if(count==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}