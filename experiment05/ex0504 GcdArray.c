/*
实验七 6．编写函数int gcd(int x, int y)用辗转相除法求x和y的最大公约数，算法参见教材例5-8。

在主函数中定义并初始化数组如下：

int a[8]={24, 1007, 956, 705, 574, 371, 416, 35}; 

int b[8]={60, 631,772, 201, 262, 763, 1000, 77};

int c[8]; 

求出下标相同的a[i]和b[i]的最大公约数，存入c[i]。例如a[0]和b[0]的最大公约数存入c[0]，a[1]和b[1]的最大公约存入c[1]。最终输出数组c的全体元素值，
正确结果是 12      1       4       3       2       7       8       7。
*/

#include<stdio.h>
#include<stdlib.h>

int Gcd(int,int);

int main(void)
{
    int a[8]={24, 1007, 956, 705, 574, 371, 416, 35}; 
    int b[8]={60, 631,772, 201, 262, 763, 1000, 77};
    int c[8];

    int i; 

    for(i=0;i<8;i++)
    {
        c[i]=Gcd(a[i],b[i]);
    }

    for(i=0;i<8;i++)
    {
        printf("%d ",c[i]);
    }
    putchar('\n');

    system("pause");
    return 0;
}

int Gcd(int numA,int numB)
{
    int temp;

    while(numA%numB!=0)
    {
        temp=numB;
        numB=numA%numB;
        numA=temp;

    }

    return numB;

}