#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int roll[21];
    for(int i=0; i<n; i++)
    {
        scanf("%d ", &roll[i]);
    }
    int k;
    scanf("%d", &k);
    for(int j=k; j<n; j++) // 
    {
        printf("%d ", roll[j]);
    
    }
    for(int i=0; i<k; i++)
    {
        printf("%d ", roll[i]);
    } 
    return 0;
}