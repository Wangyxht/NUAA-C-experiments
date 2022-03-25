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
    int col,row;
    int counter=0;


    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            if(col<row)
                putchar(' ');
            else
                putchar('*');
        }
        putchar('\n');
    }
        
    return;

}

