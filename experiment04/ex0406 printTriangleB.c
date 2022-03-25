#include<stdio.h>
#include<stdlib.h>

void PrintTriangle(int);

int main(void)
{
    int strLong;
    
    printf("请输入需要打印等腰直角三角形直角边的字符数：\n");
    while(scanf("%d",&strLong)!=1)
    {
        printf("Error,please try it again\n");
        printf("请输入需要打印等腰直角三角形直角边的字符数：\n");
        
        while(getchar()!='\n')
        {
            continue;
        }

    }
    
    PrintTriangle(strLong);

    system("pause");
    return 0;

}

void PrintTriangle(int n)
{
    int counter;
    int numberSpace;
    int numberStar;
    int counterSpace;
    int counterStar;


    for(counter=0;counter<n;counter++)
    {
        numberSpace=counter;
        numberStar=n-numberSpace;
        
        counterSpace=0;
        while (counterSpace<numberSpace)
        {
            putchar(' ');
            counterSpace++;
        }

        counterStar=0;
        while(counterStar<numberStar)
        {
            putchar('*');
            counterStar++;
        }
        
        putchar('\n');
        
    }

    return;
}