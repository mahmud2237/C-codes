#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 input: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("a=%d b=%d c=%d\n", a, b, c);
    int sum, average;
    sum = (a + b + c);
    printf("sum=%d\n", sum);
    average = sum / 3;
    printf("average=%d\n", average);
    // average show in float
    float ave;
    ave = (float)sum / 3;
    printf("ave=%f", ave);
    return 0;
}