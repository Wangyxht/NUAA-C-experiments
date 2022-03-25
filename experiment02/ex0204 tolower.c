#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define SIZE 3

int main (void)
{
    char ch,chLow,counterC=0;
    
    /*while ((ch=getchar())!= EOF)  //我认为getchar（）更香。
    {
        chLow=tolower(ch);
        putchar(chLow);
    }
    putchar('\n');
    system("pause");
    return 0;*/ 

    while (counterC<SIZE)
    {
        scanf("%c",&ch);
        chLow=tolower(ch);
        putchar(chLow);
        counterC++;

    }
    putchar('\n');
    system("pause");
    return 0;
}   