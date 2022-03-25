/*
实验四 14. 求出并输出所有的“水仙花数”。所谓“水仙花数”是指一个三位数，其各位数字的立方和等于该数本身。例如：153是一个水仙花数，因为 153=13+53+33。满足条件的水仙花数有四个，它们是153，370，371和407。要求两种算法都要实现。

算法提示如下，两个算法均为穷举法。

算法1：做一个单循环，循环变量num的取值范围从100到999；在循环体内，将num的各位数字分解到变量a、b、c中，即a代表百位、b代表十位、c代表个位，然后判断是否满足“水仙花数”的条件，若满足，则输出num的值。

算法2：做一个三重循环，外层循环变量a表示百位数，其合法的取值范围1至9；中间层循环变量b表示十位数，其取值范围0至9；内层循环变量c表示个位数，其取值范围0至9；在循环体中将a、b、c三个位数组合成一个三位数i，判断i是否满足“水仙花数”的条件，若满足，则输出i的值。


(注：填写完整程序源代码，不要贴图)
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ARRYSIZE 3

int main (void)
{
    int num;
    int temp;
    int counterArry;
    int digit[ARRYSIZE];
    int sumPow=0;
    
    printf("水仙花数结果为：");

    for(num=100;num<1000;num++)
    {
        counterArry=0;
        temp=num;
        
        while (temp>0)
        {
            digit[(ARRYSIZE-1)-counterArry]=temp%10;
            temp/=10;
            counterArry++;
        }

        for(counterArry=0 ,sumPow=0; counterArry<ARRYSIZE ;counterArry++)
        {
            sumPow+=pow(digit[counterArry],3.0);
        }

        if (sumPow==num)
        {
            printf("%d\t",num);
        }
        

    }
    putchar('\n');
    system("pause");
    return 0;
}