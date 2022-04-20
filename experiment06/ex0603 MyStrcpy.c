/*
实验七 13．编写函数void my_strcpy(char s1[], char s2[])，将s2中的字符串拷贝到数组s1中去。要求：

（1）不允许使用任何有关字符串处理的标准库函数。

（2）在主函数中输入字符串s2，调用函数my_strcpy()实现复制，在主函数中输出s1。

*/


#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

void MyStrcpy(char* ,char*);

int main(void)
{
    char test[SIZE];
    char result[SIZE];

    printf("请输入待复制的字符串：");
    gets(test);

    MyStrcpy(result,test);

    puts(result);

    system("pause");
    return 0;
}

void MyStrcpy(char* target ,char* source)
{
    int i;
    
    for(i=0;i<SIZE && source[i]!='\0';i++)
    {
        target[i]=source[i];
    }

    if(i==SIZE)
    {
        target[i-1]=0;
    }
    else
    {
        target[i]=0;
    }

    return;

}