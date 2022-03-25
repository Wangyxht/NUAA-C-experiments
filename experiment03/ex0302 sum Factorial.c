/*实验四 7．编写程序计算sum = 1!+2!+3!+4!+…+n!。要求从键盘输入整型量n，sum用实型量表示。提示：参见教材例4-16。

(注：填写完整程序源代码，不要贴图)

*/


#include<stdio.h>
#include<stdlib.h>

double Factorial (long);

int main (void)
{
    long i;
    double result;
    int status;

    fputs("sum = 1!+2!+3!+4!+…+n!,请从键盘输入整型量n以进行计算:",stdout);

    while(status=scanf("%ld",&i)!=1)
    {
        printf("输入有误，请重新输入\n");
        fputs("sum = 1!+2!+3!+4!+…+n!,请从键盘输入整型量n以进行计算:",stdout);
        while(getchar()!='\n')
            continue;

    }

    for(result=0;i>=1;i--)
    {
        result=result+Factorial(i);
    }

    printf("sum = 1!+2!+3!+4!+…+n!=%g\n",result);

    system("pause");
    return 0;

}
double Factorial (long number)
{

    double temp;

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