#include<stdio.h>
int main()
{
    char sen[1000];
    //scanf("%s", sen);
    //gets(sen);
    fgets(sen, sizeof(sen), stdin);
    printf("%s", sen);

    int i = 0 , count = 0;
    while(sen[i]!='\0')
    {
        //vowel hole count++ 
        if(sen[i]=='a' || sen[i]=='e' || sen[i]=='i' || sen[i]=='o' || sen[i]=='u')
            count++;
        else if(sen[i]=='A' || sen[i]=='E' || sen[i]=='I' || sen[i]=='O' || sen[i]=='U')  
            count++;
        i++; 
    }
    printf("The number of vowels is = %d", count);
    return 0;
}