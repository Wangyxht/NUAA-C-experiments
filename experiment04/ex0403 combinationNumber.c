/*
实验五 3．编写程序计算组合数：C(m,r)=m!/(r!×(m-r)!)，其中m、r为正整数，且m>r。

要求：

（1）编写计算阶乘的函数int fact(int n)，函数返回参数n的阶乘。 提示：可以直接拷贝上一题的fact函数。

（2）编写计算组合数的函数int com(int m, int r)，函数返回m、r的组合数。该函数调用fact()函数分别求m的阶乘、r的阶乘以及(m-r)的阶乘，完成组合数的计算。

（3）在主函数中三次调用com()函数计算并输出组合数C(4, 2)、C(6, 4)、C(8, 7)，正确结果分别是6、15和8。

*/

#include<stdio.h>
#include<stdlib.h>

long Factorial(long);
long ComNumber(long,long);

int main(void)
{

   
    printf("C(4,2)=%ld\tC(6,4)=%ld\tC(8,7)=%ld\n",ComNumber(4,2),ComNumber(6,4),ComNumber(8,7));
    system("pause");
    return 0;

}

long ComNumber(long numberDown ,long numberUp)
{
    long result;

    result=Factorial(numberDown)/(Factorial(numberUp)*Factorial(numberDown-numberUp));

    return result;
}


long Factorial (long number)
{

    long temp=0;

    if(number==0 || number==1)
    {
        return 1;
    }
        
    else 
    {
        temp=number*Factorial(number-1);
        return temp;
    }

        

}