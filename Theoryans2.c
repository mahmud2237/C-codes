#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int Largest;
    if(a>b&&a!=b&&a>c&&a!=c&&a>d&&a!=d)
    {
        Largest = a;
    }
    else if(b>c && b>d)
    {
        Largest = b;
    } 
    else if(c>d)
    {
        Largest = c;
    }
    else
        Largest = d;

    printf("Largest = %d\n", Largest);

    int Smallest;
    if(a<b && a<c && a<d)
    {
        Smallest = a;
    }
    else if(b<c && b<d)
    {
        Smallest = b;
    } 
    else if(c<d)
    {
        Smallest = c;
    }
    else
        Smallest = d;

    printf("Smallest = %d\n", Smallest);
    
    return 0;
}