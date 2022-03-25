/*
编写函数int gcd(int x, int y)求两个正整数的最大公约数。在主函数中任意输入两个正整数m和n，调用gcd函数求出并输出最大公约数。
*/
#include<stdio.h>
#include<stdlib.h>

int Gcd(int,int);

int main(void)
{   
    int numberA;
    int numberB;
    int result;

    printf("请输入待计算的值A：");
    while(scanf("%d",&numberA)!=1)
    {
        printf("Error,please try it again\n");
        printf("请输入待计算的值A：");
        
        while(getchar()!='\n')
        {
            continue;
        }

    }
    printf("请输入待计算的值B：");
    while(scanf("%d",&numberB)!=1)
    {
        printf("Error,please try it again\n");
        printf("请输入待计算的值A：");
        
        while(getchar()!='\n')
        {
            continue;
        }


    }

    result=Gcd(numberA,numberB);
    printf("%d与%d的最大公约数是：%d\n",numberA,numberB,result);

    system("pause");
    return 0;

}


int Gcd(int numberA , int numberB)
{
    int temp;


    while(temp=(numberA%numberB)!=0)    
    {                

        numberA=numberB;
        numberB=temp;

    }

    return numberB;
}
