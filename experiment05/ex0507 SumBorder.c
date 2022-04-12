/*
给定二维数组如下，请编写函数int sumBorder(int a[][M])求二维数组周边元素之和。
要求：在主函数中定义二维数组a并用上面的值初始化。用数组名做函数参数，
调用函数sumBorder()得到求和结果；然后以二维方式输出数组，最后输出求和结果。
二维数组是N行×M列的，定义行数N和列数M为符号常量。

*/

#include<stdlib.h>
#include<stdio.h>

#define ROW 4
#define COL 5

int sumBorder(int array[][COL]);
void OutPut(int array[][COL]);
int main(void)
{
    int array[ROW][COL]=
    {
        {3,6,4,6,1},
        {8,3,1,3,2},
        {4,7,1,2,7},
        {2,9,5,3,3}
    };
    
    int result;

    result=sumBorder(array);

    OutPut(array);

    printf("%d\n",result);
    system("pause");
    return 0;
}

void OutPut(int array[][COL])
{
    int i,j;
    
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ",array[i][j]);
        }

        putchar('\n');
    }
}

int sumBorder(int array[][COL])
{
    int result=0;
    int i;
    int j;

    for(i=0;i<ROW;i++)
    {
        if(i==0||i==ROW-1)
        {
            for(j=0;j<COL;j++)
            {
               result+=array[i][j];
            }       
        }

        else
        {
            result+=(array[i][0]+array[i][COL-1]);
        }
    }

    return result;
}


