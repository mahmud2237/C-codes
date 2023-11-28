#include<stdio.h>
int main()
{
    int ara[10];

    ara[0] = 645;
    ara[1] = 874;
    ara[2] = ara[1] - ara[0];
    printf("Array 2's value is %d\n", ara[2]);
    return 0;
}