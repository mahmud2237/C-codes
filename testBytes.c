#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;
    printf("int = %d bytes\n", sizeof(i));
    printf("float = %d bytes\n", sizeof(f));
    printf("double = %d bytes\n", sizeof(d));
    printf("char = %d byte\n", sizeof(c));
    getch();
}