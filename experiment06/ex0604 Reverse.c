/*编写函数void reverse(char s[])，
实现将字符串s逆向存放。例如若原s字符串为 "abcde"，则结果s为"edcba"。
在主函数中输入字符串s，调用reverse函数得到逆向存放后的新字符串，输出新的s。
算法提示：此逆置过程与整型数组的逆置算法思路是一样的，首先必须求出字符串中的有效字符个数，
即'\0'之前的字符个数，可以通过strlen(s)求出，亦可通过循环判断是否到达字符串结尾标志求出。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Swap(char* ,char*);
void Reverse(char*);

#define SIZE 100

int main(void)
{
    char test[SIZE];

    gets(test);
    Reverse(test);
    puts(test);

    system("pause");
    return 0;
}

void Swap(char* targetA,char* targetB)
{
    int temp;
    temp=*targetA;
    *targetA=*targetB;
    *targetB=temp;
}

void Reverse(char * target)
{
    int i;
    int len=strlen(target);

    for(i=0;i<len/2;i++)
    {
        Swap(&target[i],&target[len-i-1]);
    }

    return;
}