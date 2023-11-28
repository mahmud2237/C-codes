#include <stdio.h>
int main() 
{
    long long int a;
    printf("");
    scanf("%lld", &a);
    int count = 0;
    do 
    {
        a /= 10;
         ++count;
    } 
    while (a != 0);
    printf("%d digits", count);
    return 0;
}