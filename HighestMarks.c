#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int marks[101];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &marks[i]);   
    }
     
    int max = marks[1];
    for (int i=1; i<=n; i++)
    {
        if (marks[i]>max)
        {
            max = marks[i];
        }
    }
   
    for(int i=1; i<=n; i++)
    {
        printf("%d ", max-marks[i]); 
    }
    
    return 0;
}