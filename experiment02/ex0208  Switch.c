#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main (void)
{
    char level;
    
    printf("请输入考核等级（A-E）:");
    
    level=toupper(getchar());    

    switch (level)
    {
    case 'A':
        printf("90~100\n");
        break;
    case 'B':
        printf("80~89\n");
        break;
    case 'C':
        printf("70~79\n");
        break;
    case 'D':
        printf("60~69\n");
        break;
    case 'E':
        printf("0~59\n");
        break;
    default:
        printf("error\n");
        break;
    }

    system("pause");
    return 0;
}