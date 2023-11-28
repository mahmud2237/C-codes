#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter two value: ");
    scanf("%d %d", &x, &y);
    int mul = x * y;
    printf("Multiplication of x & y is %d", mul);
    return 0;
}