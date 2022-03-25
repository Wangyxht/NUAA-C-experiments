/*实验五 7．编写函数void pr_rev(int x)，用递归方法将一个整数x逆向输出。
例如，若输入6832，则输出2386。要求在主函数中输入一个任意位数的整数，
并将该整数传递给递归函数。算法提示：在pr_rev()中，判断若x是1位数（其范围是0~9），
则输出该数后返回；否则，首先输出x的个位数，然后递归调用函数pr_rev()逆向输出x的前n-1位。假定初始时x是n位数。
*/
#include<stdio.h>
#include<stdlib.h>

void Pr_Rev(int);

int main(void)
{
    int number;
    int result;

    printf("请输入待逆序打印处理的数：");
    

    while(scanf("%d",&number)!=1)
    {
        printf("Error,please try it again\n");
        printf("请输入待逆序打印处理的数：");
        
        while(getchar()!='\n')
        {
            continue;   
        }
    }    
    Pr_Rev(number);
    putchar('\n');

    system("pause");
    return 0;
}

void Pr_Rev(int number)
{
    int counterDigit=1;
    int tempNumber;

    tempNumber=number;
    while(tempNumber/10 != 0)
    {
        tempNumber/=10;
        counterDigit++;
    }

    if (counterDigit==1)
        printf("%d",number);
    else
    {
        printf("%d",number%10);
        Pr_Rev(number/10);
    }
}