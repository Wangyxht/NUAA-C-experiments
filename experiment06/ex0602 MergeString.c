/*实验七 12．编写函数void interCross(char s1[], char s2[], char s3[])，将s1和s2中的字符串交叉复制到s3中，构成一个新的字符串。例如：若s1和s2中的字符串为"abcde"和"123"，则结果s3中的字符串为"a1b2c3de"。

要求：在主函数中输入s1和s2，调用函数interCross()进行交叉操作，在主函数中输出结果字符串s3。不允许使用任何字符串库函数，只能通过判断当前字符是否为空字符来确定字符串是否到达结尾。

注意：应将字符数组s3[]定义得足够长，使之有足够的空间存放结果字符串。*/

#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

void InterCross(char* ,char* , char*);

int main(void)
{
    char target[2*SIZE];
    char stringInputA[SIZE]; 
    char stringInputB[SIZE]; 

    printf("输入第一个字符串：");
    gets(stringInputA);

    printf("输入第二个字符串：");
    gets(stringInputB);


    InterCross(target,stringInputA,stringInputB);

    puts(target);

    system("pause");
    return 0;


}

void InterCross(char* target ,char* sourceA, char* sourceB)
{
    int i,j,k;
    
    for(i=0 ,j=0 ,k=0; i<2*SIZE && (sourceA[j]!=0|| sourceB[k]!=0); i++)
    {
        if(sourceA[j]!=0 && sourceB[k]!=0)
        {
            if(i%2==0)
            {
                target[i]=sourceA[j];
                j++;
            }
            else
            {
                target[i]=sourceB[k];
                k++;
            }
        }
        else if(sourceA[j]==0)
        {
            target[i]=sourceB[k];
            k++;
        }
        else
        {
            target[i]=sourceA[j];
            j++;
        }
    }

    target[i]=0;
}