/*实验四 11. 逆序数是正向和反向读写数字顺序是一样的数，例如12321是一个逆序数。编写程序输出所有四位数中的逆序数，同时统计逆序数的个数。满足条件的逆序数个数是90个
，要求每行输出6个逆序数，最后输出逆序数的个数。

算法提示：对所有的四位数循环，循环体中将当前的一个四位数的每位数分解到四个变量中，然后判断第1位和第4位、第2位和第3位是否相等，若相等，输出该四位数，同时统计个数。
*/

#include<stdio.h>
#include<stdlib.h>

int main (void)
{

    int i=1000, counterArry ,counter=0;
    int tmp;
    int digital[4];

    printf("计算结果如下：\n");

    while(i<10000)
    {
        tmp = i;
        counterArry=0;
        while (tmp>0)
        {
            *(digital+counterArry)=tmp%10;
            tmp=tmp/10;
            counterArry++;
        }
        
        if (digital[0]==digital[3] && digital[1]==digital[2])
        {
            printf("%-4d\t",i);
            counter++;
            if (counter%6==0)
                putchar('\n');
            
            
        }                
        i++;        
        
      
    
    }
    printf("计算完成，共计%d个四位逆序数\n",counter);
    system("pause");
    return 0;

}