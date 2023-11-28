#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks(0 to 100: ");
    scanf("%d", &marks);
    if(marks>=0 && marks<=32)
        printf("F");
    else if(marks>=33 && marks<=40)
        printf("D");
    else if(marks>=41 && marks<=50)
        printf("C");
    else if(marks>=51 && marks<=60)
        printf("B");
    else if(marks>=61 && marks<=70)
        printf("A-");
    else if(marks>=71 && marks<=80)
        printf("A");
    else if(marks>=81 && marks<=100)
        printf("A+");
    else
        printf("Not valid Number");
    return 0;
}