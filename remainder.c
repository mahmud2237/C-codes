#include <stdio.h>
int main()
{
    int num;
    scanf("num=%d\n", &num);
    int remainder = num % 2;
    printf("%d", remainder);
}