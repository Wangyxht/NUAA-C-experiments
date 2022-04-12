/*
实验七 10．编写函数void fsum(int a[N][N], int i, int j, int b[2]) 分别求二维数组元素a[i][j]所在的行及所在列的全体元素之和，
例如若i=1, j=1，则a[1][1]元素所在行的元素之和为15（=8+3+1+3），
它所在列的元素之和为25（=6+3+7+9）。这两个求和结果分别存入b[0]和b[1]带回主函数。



要求：在主函数中用上述矩阵值对二维数组数组初始化，然后输出二维数组，从键盘输入任意元素的下标i和j，调用函数fsum求和，输出求和结果。

*/

#include<stdlib.h>
#include<stdio.h>

#define ROW 4
#define COL 4

void fsum(int array[ROW][COL], int, int, int result[]);
void OutPut(int array[][COL]);


int main(void)
{
    int array[ROW][COL]=
    {
        {3,6,4,6},
        {8,3,1,3},
        {4,7,1,2},
        {2,9,5,3}
    };

    int result[2]={0,0};
    int targetRow, targetCol;
    
    printf("请分别输入目标行列：");
    scanf("%d %d",&targetRow,&targetCol);
    OutPut(array);
    if(targetCol<COL && targetRow<ROW)
    {    
        fsum(array,targetRow,targetCol,result);
        printf("目标行和：%d \n目标列和：%d\n ",result[0],result[1]);
    }

    else
    {
        printf("Error,越界！\n");
    }

 

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

void fsum(int array[ROW][COL], int i, int j, int result[])
{
    int k;

    for(k=0;k<COL;k++)
    {
        result[0]+=array[i][k];
    }

    for(k=0;k<ROW;k++)
    {
        result[1]+=array[k][j];
    }
}