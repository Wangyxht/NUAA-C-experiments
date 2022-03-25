/*实验四 15. 验证哥德巴赫猜想：一个大偶数可以分解为两个素数（1不是素数，2是素数）之和。试编写程序将90到100之间的全部偶数分解成两个素数之和。

算法提示：将教材例4-18中关于判断一个量是否为素数的算法应用在本程序中判断x和y是否为素数。

*/

//若显示所有素数之和：
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>//已学习并尝试布尔类型；


bool Prime (int);

int main(void)
{
    int num;
    int oddX , oddY;
    int counter=0;

    for(num=90;num<=100;num++)
    {
        for(oddX=3;oddX<num/2;oddX+=2)
        {   
            oddY=num-oddX;
            if (Prime(oddX) && Prime(oddY))
            {
                printf("%-3d=%-2d+%-2d\t",num,oddX,oddY);
                counter++;                                
                if(counter%4==0)
            {
                putchar('\n');
            }        
            }



        }

    }
    putchar('\n');
    system("pause");
    return 0;

}

bool Prime (int num)
{
    int i;
    for(i=2;i<=sqrt(num);i++)
    {
        if (num%i==0)
            return false;            
         
    }
    return true;


}