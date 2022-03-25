/*
实验四 13．输出一个m行n列的由*组成边框的长方形。例如若m为4、n为6时，则输出：

要求：m和n从键盘输入，且m≥2 、n≥2，下述两种算法都可以实现，也可以用其他方法。

算法1：第1行和第m行输出n个*。其他行先输出一个*，再输出n-2个空格，最后输出一个*。每行结尾输出一个换行符。

算法2：将上述图形看成由*和空格构成的长方形点阵。做一个双重循环，外循环m行，内循环n列，当行号为1或行号为m或列号为1或列号n时输出*，其他情况输出空格。每行结尾输出一个换行符。

*/

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int row , col;
    for( row=1; row<=4; row++, col=0)
    {
        
        for( col=1; col<=6; col++)
        {
            if(row==1 || row==4 || col==1 || col==6)
            {
                putchar('*');
            }
            else
            {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    system("pause");
    return 0;



}