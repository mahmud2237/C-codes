#include<stdio.h>
int main()
{
    int T, x, i;
    scanf("%d", &T);
    char ch;

    for(i=0; i<T; i++)
    {
        scanf("%d%c", &x, &ch);   
        if(x>=0 && x<=60) 
            x = (60-x)+20*2+20*3;     
        else if(x>60 && x<=80)
            x = (80-x)*2+(20*3);
        else if(x>80 && x<=100)
            x = (100-x)*3;
        printf("%d minutes\n", x);
    }   
    return 0;
    
}